/* -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*- */
/* 
 * lt-script.h
 * Copyright (C) 2011 Akira TAGOH
 * 
 * Authors:
 *   Akira TAGOH  <akira@tagoh.org>
 * 
 * This library is free software: you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation, either
 * version 3 of the License, or (at your option) any later version.
 * 
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef __LT_SCRIPT_H__
#define __LT_SCRIPT_H__

#include <glib.h>

G_BEGIN_DECLS

typedef struct _lt_script_t	lt_script_t;


lt_script_t *lt_script_new                (void);
lt_script_t *lt_script_ref                (lt_script_t *script);
void         lt_script_unref              (lt_script_t *script);
GList       *lt_script_get_scripts        (lt_script_t *script);
const gchar *lt_script_lookup_script      (lt_script_t *script,
                                           const gchar *code);
const gchar *lt_script_lookup_alpha_code  (lt_script_t *script,
                                           const gchar *script_name);
const gchar *lt_script_lookup_numeric_code(lt_script_t *script,
                                           const gchar *script_name);

G_END_DECLS

#endif /* __LT_SCRIPT_H__ */
