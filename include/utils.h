#pragma once

#include <glib.h>

GBytes *read_file(const gchar *filename, GError **error);
gchar *read_file_str(const gchar *filename, GError **error);
gboolean write_file(const gchar *filename, GBytes *bytes, GError **error);

gboolean copy_file(const gchar *srcprefix, const gchar *srcfile,
		const gchar *dstprefix, const gchar *dstfile, GError **error);

gboolean rm_tree(const gchar *path, GError **error);

gchar *resolve_path(const gchar *basefile, gchar *path);
