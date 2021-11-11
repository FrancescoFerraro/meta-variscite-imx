LICENSE = "GPLv2+"
LIC_FILES_CHKSUM = "file://Licenses/gpl-2.0.txt;md5=b234ee4d69f5fce4486a80fdaf4a4263"

DEPENDS += "bison-native"

UBOOT_SRC ?= "git://github.com/FrancescoFerraro/uboot-imx;protocol=git"

SRCBRANCH = "lf_v2021.04_var02-wip"
SRCREV = "8f5c1cb09aad635d76bac4f6548c48e7d6dac942"
UBOOT_INITIAL_ENV = "u-boot-initial-env"

SRCBRANCH_imx6ul-var-dart = "imx_v2018.03_4.14.78_1.0.0_ga_var02"
SRCREV_imx6ul-var-dart = "717f29898abe82ffa2d74515806c46094075285a"

SRC_URI = "${UBOOT_SRC};branch=${SRCBRANCH}"

S = "${WORKDIR}/git"
