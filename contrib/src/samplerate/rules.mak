# SAMPLERATE
SAMPLERATE_VERSION := 0.1.8
SAMPLERATE_URL := http://www.mega-nerd.com/SRC/libsamplerate-$(SAMPLERATE_VERSION).tar.gz

PKGS += samplerate
ifeq ($(call need_pkg,"samplerate"),)
PKGS_FOUND += samplerate
endif

$(TARBALLS)/libsamplerate-$(SAMPLERATE_VERSION).tar.gz:
	$(call download,$(SAMPLERATE_URL))

.sum-samplerate: libsamplerate-$(SAMPLERATE_VERSION).tar.gz

samplerate: libsamplerate-$(SAMPLERATE_VERSION).tar.gz .sum-samplerate
	$(UNPACK)
	$(MOVE)

.samplerate: samplerate
	$(RECONF) -I M4
	cd $< && $(HOSTVARS) ./configure $(HOSTCONF)
	cd $< && $(MAKE) install
	touch $@
