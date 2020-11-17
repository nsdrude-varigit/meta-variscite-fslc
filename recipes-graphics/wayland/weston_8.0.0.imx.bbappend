FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}:"

SRC_URI_append = " file://vari-background-blue.png"

do_install_append() {
        install -d ${D}${datadir_native}/weston/
        install ${WORKDIR}/vari-background-blue.png ${D}${datadir_native}/weston/
}

FILES_${PN}_append = " ${datadir_native}/weston/vari-background-blue.png"
