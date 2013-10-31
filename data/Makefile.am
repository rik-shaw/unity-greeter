# -*- Mode: Automake; indent-tabs-mode: t; tab-width: 4 -*-

xgreeterdir = $(datarootdir)/xgreeters
dist_xgreeter_DATA = unity-greeter.desktop

dist_pkgdata_DATA = \
	a11y.svg \
	active.png \
	arrow_left.png \
	arrow_right.png \
	cof.png \
	gnome_badge.png \
	kde_badge.png \
	logo.png \
	message.png \
	recovery_console_badge.png \
	remote_login_help.png \
	shadow.png \
	ubuntu_badge.png \
	unknown_badge.png \	
	custom_afterstep_badge.png custom_dwm_badge.png custom_gnustep_badge.png custom_Lubuntu-Netbook_badge.png custom_ratpoison_badge.png custom_twm_badge.png \
	custom_awesome_badge.png custom_enlightenment_badge.png custom_i3_badge.png custom_LXDE_badge.png custom_sawfish_badge.png custom_usr_badge.png \
	custom_blackbox_badge.png custom_etoile_badge.png custom_IceWM_badge.png custom_mate_badge.png custom_subtle_badge.png custom_wmaker-common_badge.png \
	custom_cairo-dock_badge.png custom_fluxbox_badge.png custom_IceWM-Experimental_badge.png custom_mythbuntu_badge.png custom_sugar-session-0.84_badge.png \
	custom_wmii_badge.png custom_cairo-dock-fallback_badge.png custom_fvwm1_badge.png custom_IceWM-Lite_badge.png custom_openbox_badge.png custom_sugar-session-0.86_badge.png \
	custom_XBMC_badge.png custom_cairo-dock-unity_badge.png custom_fvwm_badge.png custom_icewm-session_badge.png custom_openbox-gnome_badge.png custom_sugar-session-0.88_badge.png \
	custom_xfce_badge.png custom_chromium_badge.png custom_fvwm-crystal_badge.png custom_larswm_badge.png custom_openbox-kde_badge.png custom_sugar-session-0.90_badge.png \
	custom_xmonad_badge.png custom_cinnamon_badge.png custom_gnome-xmonad_badge.png custom_Lubuntu_badge.png custom_pantheon_badge.png custom_trinity_badge.png custom_xubuntu_badge.png

@GSETTINGS_RULES@
gsettings_SCHEMAS = com.canonical.unity-greeter.gschema.xml

dist_man1_MANS = unity-greeter.1

EXTRA_DIST = \
	$(gsettings_SCHEMAS)

DISTCLEANFILES = \
	Makefile.in
