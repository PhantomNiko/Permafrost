PYTHON ?= python3

.PHONY: all image sdk
all: image sdk

image:
	$(PYTHON) tools/build.py

sdk:
	$(PYTHON) tools/sdk.py
