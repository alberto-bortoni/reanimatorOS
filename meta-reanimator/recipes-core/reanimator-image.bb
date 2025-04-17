DESCRIPTION = "Reanimator OS base image"
LICENSE = "MIT"

inherit core-image

IMAGE_FEATURES += "ssh-server-dropbear"
CORE_IMAGE_EXTRA_INSTALL += "nano htop"

