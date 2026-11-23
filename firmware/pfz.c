/* Recovered PFZ1 token and checksum semantics. Pooka's Free Software License. */
#include "pfz.h"

#ifndef PF_PFZ_MAXIMUM_SIZE
#define PF_PFZ_MAXIMUM_SIZE (128U * 1024U * 1024U)
#endif

struct input_stream {
    pf_pfz_read read;
    void *context;
    size_t size, offset, next, available;
    uint8_t bytes[512];
};

static uint32_t little32(const uint8_t *bytes) {
    return (uint32_t)bytes[0] | (uint32_t)bytes[1] << 8 |
           (uint32_t)bytes[2] << 16 | (uint32_t)bytes[3] << 24;
}

static int next_byte(struct input_stream *stream) {
    if (stream->next == stream->available) {
        size_t count = stream->size - stream->offset;
        if (count > sizeof(stream->bytes)) count = sizeof(stream->bytes);
        if (!count || !stream->read(stream->context, stream->offset, stream->bytes, count))
            return -1;
        stream->offset += count;
        stream->next = 0;
        stream->available = count;
    }
    return stream->bytes[stream->next++];
}

int pf_pfz_decode(pf_pfz_read read, void *context, size_t input_size,
                  void *output, size_t capacity, size_t *written) {
    uint8_t header[16];
    uint8_t *destination = output;
    size_t position = 0;
    uint32_t checksum = UINT32_MAX;
    if (written) *written = 0;
    if (!read || input_size < sizeof(header)) return PF_PFZ_HEADER;
    if (!read(context, 0, header, sizeof(header))) return PF_PFZ_INPUT;
    if (header[0] != 'P' || header[1] != 'F' || header[2] != 'Z' || header[3] != '1')
        return PF_PFZ_HEADER;
    size_t size = little32(header + 4);
    if (size > PF_PFZ_MAXIMUM_SIZE || little32(header + 8) != input_size - 16 ||
        size > capacity || (size && !destination)) return PF_PFZ_SIZE;
    struct input_stream stream;
    stream.read = read;
    stream.context = context;
    stream.size = input_size;
    stream.offset = 16;
    stream.next = stream.available = 0;
    while (position < size) {
        int control = next_byte(&stream);
        if (control < 0) return PF_PFZ_INPUT;
        for (unsigned bit = 0; bit < 8 && position < size; bit++) {
            size_t count = 1, distance = 0;
            int literal = -1;
            if (control & (1U << bit)) {
                literal = next_byte(&stream);
                if (literal < 0) return PF_PFZ_INPUT;
            } else {
                int low = next_byte(&stream), high = next_byte(&stream);
                if (low < 0 || high < 0) return PF_PFZ_INPUT;
                unsigned token = (unsigned)low | (unsigned)high << 8;
                distance = (token >> 4) + 1;
                count = (token & 15) + 3;
                if (distance > position || count > size - position) return PF_PFZ_MATCH;
            }
            for (size_t index = 0; index < count; index++) {
                uint8_t value = literal >= 0 ? (uint8_t)literal : destination[position - distance];
                destination[position++] = value;
                checksum ^= value;
                for (unsigned shift = 0; shift < 8; shift++)
                    checksum = (checksum >> 1) ^ ((checksum & 1) ? UINT32_C(0xedb88320) : 0);
            }
            if (position == size && (unsigned)control >> (bit + 1)) return PF_PFZ_INPUT;
        }
    }
    if (stream.offset - (stream.available - stream.next) != input_size) return PF_PFZ_INPUT;
    if ((checksum ^ UINT32_MAX) != little32(header + 12)) return PF_PFZ_CHECKSUM;
    if (written) *written = position;
    return PF_PFZ_OK;
}

struct memory_input { const uint8_t *bytes; size_t size; };
static int read_memory(void *context, size_t offset, void *destination, size_t count) {
    const struct memory_input *input = context;
    uint8_t *result = destination;
    if (offset > input->size || count > input->size - offset) return 0;
    for (size_t index = 0; index < count; index++) result[index] = input->bytes[offset + index];
    return 1;
}

int pf_pfz_unpack(const void *input, size_t input_size,
                  void *output, size_t capacity, size_t *written) {
    struct memory_input memory = {input, input_size};
    if (!input) { if (written) *written = 0; return PF_PFZ_HEADER; }
    return pf_pfz_decode(read_memory, &memory, input_size, output, capacity, written);
}
