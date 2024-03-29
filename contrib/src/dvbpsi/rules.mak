# dvbpsi

DVBPSI_VERSION := 0.2.2
DVBPSI_URL := $(VIDEOLAN)/libdvbpsi/$(DVBPSI_VERSION)/libdvbpsi-$(DVBPSI_VERSION).tar.bz2

PKGS += dvbpsi
ifeq ($(call need_pkg,"libdvbpsi"),)
PKGS_FOUND += dvbpsi
endif

$(TARBALLS)/libdvbpsi-$(DVBPSI_VERSION).tar.bz2:
	$(call download,$(DVBPSI_URL))

.sum-dvbpsi: libdvbpsi-$(DVBPSI_VERSION).tar.bz2

libdvbpsi: libdvbpsi-$(DVBPSI_VERSION).tar.bz2 .sum-dvbpsi
	$(UNPACK)
	$(MOVE)

.dvbpsi: libdvbpsi
	$(RECONF)
	cd $< && $(HOSTVARS) ./configure $(HOSTCONF) --enable-release
	cd $< && $(MAKE) install
	touch $@
