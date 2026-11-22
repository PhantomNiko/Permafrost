PYTHON ?= python3

.PHONY: all image sdk
all: image

image:
	$(PYTHON) tools/build.py

sdk:
	$(PYTHON) tools/sdk.py
