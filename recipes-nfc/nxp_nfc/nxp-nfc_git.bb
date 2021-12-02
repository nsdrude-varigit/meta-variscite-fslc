# Copyright (C) 2016 NXP Semiconductors

DESCRIPTION = "Linux NFC stack for NCI based NXP NFC Controllers."
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://src/include/linux_nfc_api.h;md5=3a0d875da69c6803615751691be0f0e7"

SRC_URI = " \
    git://github.com/nsdrude/linux_libnfc-nci.git;branch=master \
"
SRCREV = "292cf12cee69b0fcfdd499d6c6cc57cff0f2fe97"

inherit autotools pkgconfig lib_package

# Configure to run without Linux driver
# EXTRA_OECONF = " --enable-alt"

S = "${WORKDIR}/git"
