LICENSE = "GPLv2+"
LIC_FILES_CHKSUM = "file://Licenses/gpl-2.0.txt;md5=b234ee4d69f5fce4486a80fdaf4a4263"

DEPENDS += "bison-native"

UBOOT_SRC ?= "git://github.com/varigit/uboot-imx;protocol=https"

SRCBRANCH = "imx_v2020.04_5.4.24_2.1.0_var02"
SRCREV = "575e54f56b70385da07ec35c6a72da56707269bb"
UBOOT_INITIAL_ENV_DEVICE = "sd"

SRCBRANCH_var-som-mx6 = "imx_v2018.03_4.14.78_1.0.0_ga_var02"
SRCREV_var-som-mx6 = "e382ce1bbd5ce83e4f3b9dbeed5d04e41708aae5"
UBOOT_INITIAL_ENV_DEVICE_var-som-mx6 = "nand"

SRCBRANCH_imx6ul-var-dart = "imx_v2018.03_4.14.78_1.0.0_ga_var02"
SRCREV_imx6ul-var-dart = "32670c4e21bf8d1de08e1d1b1f9bfe42c23bc6af"
UBOOT_INITIAL_ENV_DEVICE_imx6ul-var-dart = "nand"

SRCBRANCH_imx7-var-som = "imx_v2018.03_4.14.78_1.0.0_ga_var02"
SRCREV_imx7-var-som = "f634b812f90a786002921c6f4987b896e62c5d7c"
UBOOT_INITIAL_ENV_DEVICE_imx7-var-som = "nand"

SRC_URI = "${UBOOT_SRC};branch=${SRCBRANCH}"

S = "${WORKDIR}/git"
