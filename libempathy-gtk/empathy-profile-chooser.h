/* -*- Mode: C; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2; -*- */
/*
 * Copyright (C) 2007-2008 Collabora Ltd.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 * Authors: Xavier Claessens <xclaesse@gmail.com>
 */

#ifndef __EMPATHY_PROTOCOL_CHOOSER_H__
#define __EMPATHY_PROTOCOL_CHOOSER_H__

#include <libmissioncontrol/mc-profile.h>

G_BEGIN_DECLS

GtkWidget * empathy_profile_chooser_new (void);
McProfile * empathy_profile_chooser_dup_selected (GtkWidget *widget);
gint empathy_profile_chooser_n_profiles (GtkWidget *widget);

G_END_DECLS
#endif /*  __EMPATHY_PROTOCOL_CHOOSER_H__ */
