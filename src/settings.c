/* settings.c generated by valac 0.20.1, the Vala compiler
 * generated from settings.vala, do not modify */

/* -*- Mode: Vala; indent-tabs-mode: nil; tab-width: 4 -*-
 *
 * Copyright (C) 2011,2012 Canonical Ltd
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Authors: Robert Ancell <robert.ancell@canonical.com>
 *          Michael Terry <michael.terry@canonical.com>
 */

#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <gio/gio.h>
#include <float.h>
#include <math.h>
#include <gobject/gvaluecollector.h>


#define TYPE_UG_SETTINGS (ug_settings_get_type ())
#define UG_SETTINGS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_UG_SETTINGS, UGSettings))
#define UG_SETTINGS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_UG_SETTINGS, UGSettingsClass))
#define IS_UG_SETTINGS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_UG_SETTINGS))
#define IS_UG_SETTINGS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_UG_SETTINGS))
#define UG_SETTINGS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_UG_SETTINGS, UGSettingsClass))

typedef struct _UGSettings UGSettings;
typedef struct _UGSettingsClass UGSettingsClass;
typedef struct _UGSettingsPrivate UGSettingsPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
typedef struct _ParamSpecUGSettings ParamSpecUGSettings;

struct _UGSettings {
	GTypeInstance parent_instance;
	volatile int ref_count;
	UGSettingsPrivate * priv;
};

struct _UGSettingsClass {
	GTypeClass parent_class;
	void (*finalize) (UGSettings *self);
};

struct _ParamSpecUGSettings {
	GParamSpec parent_instance;
};


static gpointer ug_settings_parent_class = NULL;

gpointer ug_settings_ref (gpointer instance);
void ug_settings_unref (gpointer instance);
GParamSpec* param_spec_ug_settings (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_ug_settings (GValue* value, gpointer v_object);
void value_take_ug_settings (GValue* value, gpointer v_object);
gpointer value_get_ug_settings (const GValue* value);
GType ug_settings_get_type (void) G_GNUC_CONST;
enum  {
	UG_SETTINGS_DUMMY_PROPERTY
};
#define UG_SETTINGS_KEY_BACKGROUND "background"
#define UG_SETTINGS_KEY_BACKGROUND_COLOR "background-color"
#define UG_SETTINGS_KEY_DRAW_USER_BACKGROUNDS "draw-user-backgrounds"
#define UG_SETTINGS_KEY_DRAW_GRID "draw-grid"
#define UG_SETTINGS_KEY_LOGO "logo"
#define UG_SETTINGS_KEY_BACKGROUND_LOGO "background-logo"
#define UG_SETTINGS_KEY_THEME_NAME "theme-name"
#define UG_SETTINGS_KEY_ICON_THEME_NAME "icon-theme-name"
#define UG_SETTINGS_KEY_FONT_NAME "font-name"
#define UG_SETTINGS_KEY_XFT_ANTIALIAS "xft-antialias"
#define UG_SETTINGS_KEY_XFT_DPI "xft-dpi"
#define UG_SETTINGS_KEY_XFT_HINTSTYLE "xft-hintstyle"
#define UG_SETTINGS_KEY_XFT_RGBA "xft-rgba"
#define UG_SETTINGS_KEY_ONSCREEN_KEYBOARD "onscreen-keyboard"
#define UG_SETTINGS_KEY_HIGH_CONTRAST "high-contrast"
#define UG_SETTINGS_KEY_SCREEN_READER "screen-reader"
#define UG_SETTINGS_KEY_PLAY_READY_SOUND "play-ready-sound"
#define UG_SETTINGS_KEY_INDICATORS "indicators"
#define UG_SETTINGS_SCHEMA "com.canonical.unity-greeter"
gboolean ug_settings_get_boolean (const gchar* key);
gboolean ug_settings_safe_get_boolean (const gchar* key, gboolean _default_);
gdouble ug_settings_get_double (const gchar* key);
gchar* ug_settings_get_string (const gchar* key);
gboolean ug_settings_set_boolean (const gchar* key, gboolean value);
gchar** ug_settings_get_strv (const gchar* key, int* result_length1);
gboolean ug_settings_set_strv (const gchar* key, gchar** value, int value_length1);
UGSettings* ug_settings_new (void);
UGSettings* ug_settings_construct (GType object_type);
static void ug_settings_finalize (UGSettings* obj);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);
static gint _vala_array_length (gpointer array);


gboolean ug_settings_get_boolean (const gchar* key) {
	gboolean result = FALSE;
	GSettings* _tmp0_;
	GSettings* gsettings;
	const gchar* _tmp1_;
	gboolean _tmp2_ = FALSE;
	g_return_val_if_fail (key != NULL, FALSE);
	_tmp0_ = g_settings_new (UG_SETTINGS_SCHEMA);
	gsettings = _tmp0_;
	_tmp1_ = key;
	_tmp2_ = g_settings_get_boolean (gsettings, _tmp1_);
	result = _tmp2_;
	_g_object_unref0 (gsettings);
	return result;
}


gboolean ug_settings_safe_get_boolean (const gchar* key, gboolean _default_) {
	gboolean result = FALSE;
	GSettings* _tmp0_;
	GSettings* gsettings;
	GSettings* _tmp1_;
	gchar** _tmp2_;
	gchar** _tmp3_ = NULL;
	gchar** keys;
	gint keys_length1;
	gint _keys_size_;
	gchar** _tmp4_;
	gint _tmp4__length1;
	gboolean _tmp11_;
	g_return_val_if_fail (key != NULL, FALSE);
	_tmp0_ = g_settings_new (UG_SETTINGS_SCHEMA);
	gsettings = _tmp0_;
	_tmp1_ = gsettings;
	_tmp3_ = _tmp2_ = g_settings_list_keys (_tmp1_);
	keys = _tmp3_;
	keys_length1 = _vala_array_length (_tmp2_);
	_keys_size_ = keys_length1;
	_tmp4_ = keys;
	_tmp4__length1 = keys_length1;
	{
		gchar** k_collection = NULL;
		gint k_collection_length1 = 0;
		gint _k_collection_size_ = 0;
		gint k_it = 0;
		k_collection = _tmp4_;
		k_collection_length1 = _tmp4__length1;
		for (k_it = 0; k_it < _tmp4__length1; k_it = k_it + 1) {
			gchar* _tmp5_;
			gchar* k = NULL;
			_tmp5_ = g_strdup (k_collection[k_it]);
			k = _tmp5_;
			{
				const gchar* _tmp6_;
				const gchar* _tmp7_;
				_tmp6_ = k;
				_tmp7_ = key;
				if (g_strcmp0 (_tmp6_, _tmp7_) == 0) {
					GSettings* _tmp8_;
					const gchar* _tmp9_;
					gboolean _tmp10_ = FALSE;
					_tmp8_ = gsettings;
					_tmp9_ = key;
					_tmp10_ = g_settings_get_boolean (_tmp8_, _tmp9_);
					result = _tmp10_;
					_g_free0 (k);
					keys = (_vala_array_free (keys, keys_length1, (GDestroyNotify) g_free), NULL);
					_g_object_unref0 (gsettings);
					return result;
				}
				_g_free0 (k);
			}
		}
	}
	_tmp11_ = _default_;
	result = _tmp11_;
	keys = (_vala_array_free (keys, keys_length1, (GDestroyNotify) g_free), NULL);
	_g_object_unref0 (gsettings);
	return result;
}


gdouble ug_settings_get_double (const gchar* key) {
	gdouble result = 0.0;
	GSettings* _tmp0_;
	GSettings* gsettings;
	const gchar* _tmp1_;
	gdouble _tmp2_ = 0.0;
	g_return_val_if_fail (key != NULL, 0.0);
	_tmp0_ = g_settings_new (UG_SETTINGS_SCHEMA);
	gsettings = _tmp0_;
	_tmp1_ = key;
	_tmp2_ = g_settings_get_double (gsettings, _tmp1_);
	result = _tmp2_;
	_g_object_unref0 (gsettings);
	return result;
}


gchar* ug_settings_get_string (const gchar* key) {
	gchar* result = NULL;
	GSettings* _tmp0_;
	GSettings* gsettings;
	const gchar* _tmp1_;
	gchar* _tmp2_ = NULL;
	g_return_val_if_fail (key != NULL, NULL);
	_tmp0_ = g_settings_new (UG_SETTINGS_SCHEMA);
	gsettings = _tmp0_;
	_tmp1_ = key;
	_tmp2_ = g_settings_get_string (gsettings, _tmp1_);
	result = _tmp2_;
	_g_object_unref0 (gsettings);
	return result;
}


gboolean ug_settings_set_boolean (const gchar* key, gboolean value) {
	gboolean result = FALSE;
	GSettings* _tmp0_;
	GSettings* gsettings;
	const gchar* _tmp1_;
	gboolean _tmp2_;
	gboolean _tmp3_ = FALSE;
	g_return_val_if_fail (key != NULL, FALSE);
	_tmp0_ = g_settings_new (UG_SETTINGS_SCHEMA);
	gsettings = _tmp0_;
	_tmp1_ = key;
	_tmp2_ = value;
	_tmp3_ = g_settings_set_boolean (gsettings, _tmp1_, _tmp2_);
	result = _tmp3_;
	_g_object_unref0 (gsettings);
	return result;
}


gchar** ug_settings_get_strv (const gchar* key, int* result_length1) {
	gchar** result = NULL;
	GSettings* _tmp0_;
	GSettings* gsettings;
	const gchar* _tmp1_;
	gchar** _tmp2_;
	gchar** _tmp3_ = NULL;
	gchar** _tmp4_;
	gint _tmp4__length1;
	g_return_val_if_fail (key != NULL, NULL);
	_tmp0_ = g_settings_new (UG_SETTINGS_SCHEMA);
	gsettings = _tmp0_;
	_tmp1_ = key;
	_tmp3_ = _tmp2_ = g_settings_get_strv (gsettings, _tmp1_);
	_tmp4_ = _tmp3_;
	_tmp4__length1 = _vala_array_length (_tmp2_);
	if (result_length1) {
		*result_length1 = _tmp4__length1;
	}
	result = _tmp4_;
	_g_object_unref0 (gsettings);
	return result;
}


gboolean ug_settings_set_strv (const gchar* key, gchar** value, int value_length1) {
	gboolean result = FALSE;
	GSettings* _tmp0_;
	GSettings* gsettings;
	const gchar* _tmp1_;
	gchar** _tmp2_;
	gint _tmp2__length1;
	gboolean _tmp3_ = FALSE;
	g_return_val_if_fail (key != NULL, FALSE);
	_tmp0_ = g_settings_new (UG_SETTINGS_SCHEMA);
	gsettings = _tmp0_;
	_tmp1_ = key;
	_tmp2_ = value;
	_tmp2__length1 = value_length1;
	_tmp3_ = g_settings_set_strv (gsettings, _tmp1_, _tmp2_);
	result = _tmp3_;
	_g_object_unref0 (gsettings);
	return result;
}


UGSettings* ug_settings_construct (GType object_type) {
	UGSettings* self = NULL;
	self = (UGSettings*) g_type_create_instance (object_type);
	return self;
}


UGSettings* ug_settings_new (void) {
	return ug_settings_construct (TYPE_UG_SETTINGS);
}


static void value_ug_settings_init (GValue* value) {
	value->data[0].v_pointer = NULL;
}


static void value_ug_settings_free_value (GValue* value) {
	if (value->data[0].v_pointer) {
		ug_settings_unref (value->data[0].v_pointer);
	}
}


static void value_ug_settings_copy_value (const GValue* src_value, GValue* dest_value) {
	if (src_value->data[0].v_pointer) {
		dest_value->data[0].v_pointer = ug_settings_ref (src_value->data[0].v_pointer);
	} else {
		dest_value->data[0].v_pointer = NULL;
	}
}


static gpointer value_ug_settings_peek_pointer (const GValue* value) {
	return value->data[0].v_pointer;
}


static gchar* value_ug_settings_collect_value (GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	if (collect_values[0].v_pointer) {
		UGSettings* object;
		object = collect_values[0].v_pointer;
		if (object->parent_instance.g_class == NULL) {
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		}
		value->data[0].v_pointer = ug_settings_ref (object);
	} else {
		value->data[0].v_pointer = NULL;
	}
	return NULL;
}


static gchar* value_ug_settings_lcopy_value (const GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	UGSettings** object_p;
	object_p = collect_values[0].v_pointer;
	if (!object_p) {
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
	}
	if (!value->data[0].v_pointer) {
		*object_p = NULL;
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
		*object_p = value->data[0].v_pointer;
	} else {
		*object_p = ug_settings_ref (value->data[0].v_pointer);
	}
	return NULL;
}


GParamSpec* param_spec_ug_settings (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags) {
	ParamSpecUGSettings* spec;
	g_return_val_if_fail (g_type_is_a (object_type, TYPE_UG_SETTINGS), NULL);
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
	G_PARAM_SPEC (spec)->value_type = object_type;
	return G_PARAM_SPEC (spec);
}


gpointer value_get_ug_settings (const GValue* value) {
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TYPE_UG_SETTINGS), NULL);
	return value->data[0].v_pointer;
}


void value_set_ug_settings (GValue* value, gpointer v_object) {
	UGSettings* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TYPE_UG_SETTINGS));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, TYPE_UG_SETTINGS));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
		ug_settings_ref (value->data[0].v_pointer);
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		ug_settings_unref (old);
	}
}


void value_take_ug_settings (GValue* value, gpointer v_object) {
	UGSettings* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TYPE_UG_SETTINGS));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, TYPE_UG_SETTINGS));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		ug_settings_unref (old);
	}
}


static void ug_settings_class_init (UGSettingsClass * klass) {
	ug_settings_parent_class = g_type_class_peek_parent (klass);
	UG_SETTINGS_CLASS (klass)->finalize = ug_settings_finalize;
}


static void ug_settings_instance_init (UGSettings * self) {
	self->ref_count = 1;
}


static void ug_settings_finalize (UGSettings* obj) {
	UGSettings * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_UG_SETTINGS, UGSettings);
}


GType ug_settings_get_type (void) {
	static volatile gsize ug_settings_type_id__volatile = 0;
	if (g_once_init_enter (&ug_settings_type_id__volatile)) {
		static const GTypeValueTable g_define_type_value_table = { value_ug_settings_init, value_ug_settings_free_value, value_ug_settings_copy_value, value_ug_settings_peek_pointer, "p", value_ug_settings_collect_value, "p", value_ug_settings_lcopy_value };
		static const GTypeInfo g_define_type_info = { sizeof (UGSettingsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) ug_settings_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (UGSettings), 0, (GInstanceInitFunc) ug_settings_instance_init, &g_define_type_value_table };
		static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
		GType ug_settings_type_id;
		ug_settings_type_id = g_type_register_fundamental (g_type_fundamental_next (), "UGSettings", &g_define_type_info, &g_define_type_fundamental_info, 0);
		g_once_init_leave (&ug_settings_type_id__volatile, ug_settings_type_id);
	}
	return ug_settings_type_id__volatile;
}


gpointer ug_settings_ref (gpointer instance) {
	UGSettings* self;
	self = instance;
	g_atomic_int_inc (&self->ref_count);
	return instance;
}


void ug_settings_unref (gpointer instance) {
	UGSettings* self;
	self = instance;
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
		UG_SETTINGS_GET_CLASS (self)->finalize (self);
		g_type_free_instance ((GTypeInstance *) self);
	}
}


static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	if ((array != NULL) && (destroy_func != NULL)) {
		int i;
		for (i = 0; i < array_length; i = i + 1) {
			if (((gpointer*) array)[i] != NULL) {
				destroy_func (((gpointer*) array)[i]);
			}
		}
	}
}


static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	_vala_array_destroy (array, array_length, destroy_func);
	g_free (array);
}


static gint _vala_array_length (gpointer array) {
	int length;
	length = 0;
	if (array) {
		while (((gpointer*) array)[length]) {
			length++;
		}
	}
	return length;
}


