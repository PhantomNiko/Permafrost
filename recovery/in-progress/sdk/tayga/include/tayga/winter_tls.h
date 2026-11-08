#ifndef WINTER_TLS_H
#define WINTER_TLS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

enum {
	WINTER_TLS_HASH_BYTES = 32u,
	WINTER_TLS_KEY_BYTES = 32u,
	WINTER_TLS_IV_BYTES = 12u,
	WINTER_TLS_TAG_BYTES = 16u,
	WINTER_TLS_MAX_RECORD_BYTES = 18432u,
	WINTER_TLS_MAX_PLAINTEXT_BYTES = 16640u,
	WINTER_TLS_MAX_HANDSHAKE_BYTES = 32768u,
	WINTER_TLS_SERVER_NAME_CHARS = 128u
};

typedef bool (*WinterTlsReadExactFn)(
	void* context,
	uint8_t* out,
	size_t bytes,
	char* errorText,
	size_t errorTextSize);

typedef bool (*WinterTlsWriteAllFn)(
	void* context,
	const uint8_t* bytes,
	size_t byteCount,
	char* errorText,
	size_t errorTextSize);

typedef bool (*WinterTlsRandomFn)(void* context, uint8_t* out, size_t bytes);

typedef bool (*WinterTlsVerifyFn)(
	void* context,
	const char* serverName,
	const uint8_t leafSha256[WINTER_TLS_HASH_BYTES],
	bool sawCertificate,
	char* errorText,
	size_t errorTextSize);

typedef struct WinterTlsStream {
	void* context;
	WinterTlsReadExactFn readExact;
	WinterTlsWriteAllFn writeAll;
	WinterTlsRandomFn random;
	WinterTlsVerifyFn verify;
} WinterTlsStream;

typedef struct WinterTlsSha256Context {
	uint32_t state[8];
	uint64_t bytes;
	uint8_t block[64];
	uint32_t blockUsed;
} WinterTlsSha256Context;

typedef struct WinterTlsTrafficKeys {
	uint8_t key[WINTER_TLS_KEY_BYTES];
	uint8_t iv[WINTER_TLS_IV_BYTES];
	uint64_t sequence;
} WinterTlsTrafficKeys;

typedef struct WinterTlsFe25519 {
	uint32_t limb[17];
} WinterTlsFe25519;

typedef struct WinterTlsClient {
	WinterTlsStream stream;
	char serverName[WINTER_TLS_SERVER_NAME_CHARS];
	WinterTlsSha256Context transcript;
	WinterTlsTrafficKeys clientHandshake;
	WinterTlsTrafficKeys serverHandshake;
	WinterTlsTrafficKeys clientApplication;
	WinterTlsTrafficKeys serverApplication;
	uint8_t leafCertHash[WINTER_TLS_HASH_BYTES];
	uint32_t randomState;
	bool handshakeReady;
	bool applicationReady;
	bool sawCertificate;
} WinterTlsClient;

const char* winter_tls_version(void);
void winter_tls_client_init(WinterTlsClient* tls, const WinterTlsStream* stream, const char* serverName);
bool winter_tls_client_handshake(WinterTlsClient* tls, char* errorText, size_t errorTextSize);
bool winter_tls_write(
	WinterTlsClient* tls,
	const uint8_t* bytes,
	size_t byteCount,
	char* errorText,
	size_t errorTextSize);
bool winter_tls_read(
	WinterTlsClient* tls,
	uint8_t* out,
	size_t outCapacity,
	size_t* outBytes,
	char* errorText,
	size_t errorTextSize);
bool winter_tls_leaf_sha256(const WinterTlsClient* tls, uint8_t out[WINTER_TLS_HASH_BYTES]);

#ifdef __cplusplus
}
#endif

#endif
