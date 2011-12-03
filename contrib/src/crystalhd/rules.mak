# CrystalHD headers

CRYSTAL_HEADERS_URL := http://www.broadcom.com/docs/support/crystalhd/crystalhd_lgpl_includes.zip

$(TARBALLS)/crystalhd_lgpl_includes.zip:
	$(call download,$(CRYSTAL_HEADERS_URL))

CRYSTAL_SOURCES := crystalhd_lgpl_includes.zip

.sum-crystalhd: $(CRYSTAL_SOURCES)

.crystalhd: $(CRYSTAL_SOURCES) .sum-crystalhd
	mkdir -p -- "$(PREFIX)/include/libcrystalhd"
	unzip -o $< -d "$(PREFIX)/include/libcrystalhd"
ifdef HAVE_WIN32 # we want dlopening on win32
	rm -rf $(PREFIX)/include/libcrystalhd/bc_drv_if.h
endif
	patch -p0 -f -d $(PREFIX)/include/libcrystalhd < ../src/crystalhd/mingw.patch
	touch $@
