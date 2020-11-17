FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}:"

SRC_URI_append = " file://fbconsole.weston-start"

do_install_append() {
	install -Dm 644 ${WORKDIR}/fbconsole.weston-start ${D}${datadir}/weston-start/fbconsole
}
