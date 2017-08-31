/* 
 * Copyright (C) 2006 Martin Koegler
 * Copyright (C) 2010 VNC Team
 *    
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307,
 * USA.
 */

#ifndef __RFB_PAM_H__
#define __RFB_PAM_H__

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#ifndef HAVE_PAM
#error "This header should not be included when PAM is unsupported"
#endif

#ifdef __cplusplus
extern "C" {
#endif

int do_pam_auth(const char *service, const char *username, const char *password);

#ifdef __cplusplus
}
#endif

#endif
