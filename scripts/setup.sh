#!/bin/bash
set -e

echo ">> Setting up environment for Reanimator OS..."

# Init environment
source poky/oe-init-build-env

# Add custom layer
bitbake-layers add-layer ../meta-reanimator
bitbake-layers add-layer ../meta-openembedded/meta-oe

echo ">> Environment ready. Run 'bitbake core-image-sato' to build."

