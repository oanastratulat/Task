pkgconfigdir = $(libdir)/pkgconfig

AM_CPPFLAGS = -DMODULE_STRING=\"libvlc\"
AM_CFLAGS = $(CFLAGS_libvlc)

SUFFIXES = .pc.in .pc

BUILT_SOURCES = $(nodist_pkginclude_HEADERS)
CLEANFILES = $(BUILT_SOURCES) $(pkgconfig_DATA)

pkginclude_HEADERS = \
	../include/vlc/deprecated.h \
	../include/vlc/libvlc.h \
	../include/vlc/libvlc_events.h \
	../include/vlc/libvlc_media.h \
	../include/vlc/libvlc_media_discoverer.h \
	../include/vlc/libvlc_media_library.h \
	../include/vlc/libvlc_media_list.h \
	../include/vlc/libvlc_media_list_player.h \
	../include/vlc/libvlc_media_player.h \
	../include/vlc/libvlc_structures.h \
	../include/vlc/libvlc_vlm.h \
	../include/vlc/vlc.h

nodist_pkginclude_HEADERS = ../include/vlc/libvlc_version.h

../include/vlc/libvlc_version.h: ../include/vlc/libvlc_version.h.in $(top_builddir)/config.status
	$(AM_V_GEN)cd "$(top_builddir)" && \
	$(SHELL) ./config.status --file="src/$@"

lib_LTLIBRARIES = libvlc.la

libvlc_la_SOURCES = \
	libvlc_internal.h \
	event_internal.h \
	media_internal.h \
	media_list_internal.h \
	media_player_internal.h \
	core.c \
	error.c \
	log.c \
	playlist.c \
	vlm.c \
	video.c \
	audio.c \
	event.c \
	event_async.c \
	media.c \
	media_player.c \
	media_list.c \
	media_list_path.h \
	media_list_player.c \
	media_library.c \
	media_discoverer.c \
	../src/revision.c
EXTRA_DIST = libvlc.pc.in libvlc.sym ../include/vlc/libvlc_version.h.in

libvlc_la_LIBADD = $(LIBS_libvlc) \
	../src/libvlccore.la ../compat/libcompat.la
libvlc_la_LDFLAGS = \
	$(LDFLAGS_libvlc) \
	-no-undefined \
	-version-info 6:0:1 \
	-export-symbols $(srcdir)/libvlc.sym
libvlc_la_DEPENDENCIES = libvlc.sym
if HAVE_WIN32
libvlc_la_DEPENDENCIES += ../src/libvlc_win32_rc.$(OBJEXT)
libvlc_la_LDFLAGS += -Wl,../src/libvlc_win32_rc.$(OBJEXT) -avoid-version
endif

pkgconfig_DATA = libvlc.pc

.pc.in.pc: $(top_builddir)/config.status
	$(AM_V_GEN)cd "$(top_builddir)" && \
	$(SHELL) ./config.status --file="lib/$@"

check-local:
	$(top_srcdir)/src/check_headers $(pkginclude_HEADERS)
