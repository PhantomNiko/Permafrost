PYTHON ?= python3
NASM ?= nasm

.PHONY: all image sdk
all: image sdk

image:
	$(PYTHON) tools/build.py --nasm $(NASM)

sdk:
	$(PYTHON) tools/sdk.py
