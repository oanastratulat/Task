/*****************************************************************************
 * messages.h: messages interface
 * This library provides basic functions for threads to interact with user
 * interface, such as message output.
 *****************************************************************************
 * Copyright (C) 1999, 2000, 2001, 2002 VLC authors and VideoLAN
 * $Id: 292acf2ef7b3d0e2a05799cdd909c7b7811894e9 $
 *
 * Authors: Vincent Seguin <seguin@via.ecp.fr>
 *          Samuel Hocevar <sam@zoy.org>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston MA 02110-1301, USA.
 *****************************************************************************/

#ifndef VLC_MESSAGES_H_
#define VLC_MESSAGES_H_

/**
 * \file
 * This file defines structures and functions to handle messages and statistics gathering
 */

#include <stdarg.h>

/**
 * \defgroup messages Messages
 * This library provides basic functions for threads to interact with user
 * interface, such as message output.
 *
 * @{
 */

/** Message types */
enum msg_item_type
{
    VLC_MSG_INFO=0, /**< Important information */
    VLC_MSG_ERR,    /**< Error */
    VLC_MSG_WARN,   /**< Warning */
    VLC_MSG_DBG,    /**< Debug */
};

/**
 * Log message
 */
typedef struct
{
    uintptr_t   i_object_id; /**< Emitter (temporaly) unique object ID or 0 */
    const char *psz_object_type; /**< Emitter object type name */
    const char *psz_module; /**< Emitter module (source code) */
    const char *psz_header; /**< Additional header (used by VLM media) */
} msg_item_t;

/**
 * Used by interface plugins which subscribe to the message bank.
 */
typedef struct msg_subscription_t msg_subscription_t;

/*****************************************************************************
 * Prototypes
 *****************************************************************************/
VLC_API void vlc_Log(vlc_object_t *, int,
                     const char *, const char *, ...) VLC_FORMAT( 4, 5 );
VLC_API void vlc_vaLog(vlc_object_t *, int,
                       const char *, const char *, va_list);
#define msg_GenericVa(a, b, c, d, e) vlc_vaLog(VLC_OBJECT(a), b, c, d, e)

#define msg_Info( p_this, ... ) \
    vlc_Log( VLC_OBJECT(p_this), VLC_MSG_INFO, MODULE_STRING, __VA_ARGS__ )
#define msg_Err( p_this, ... ) \
    vlc_Log( VLC_OBJECT(p_this), VLC_MSG_ERR,  MODULE_STRING, __VA_ARGS__ )
#define msg_Warn( p_this, ... ) \
    vlc_Log( VLC_OBJECT(p_this), VLC_MSG_WARN, MODULE_STRING, __VA_ARGS__ )
#define msg_Dbg( p_this, ... ) \
    vlc_Log( VLC_OBJECT(p_this), VLC_MSG_DBG,  MODULE_STRING, __VA_ARGS__ )

/**
 * Message logging callback signature.
 * Accepts one private data pointer, the message, and an overrun counter.
 */
typedef void (*msg_callback_t) (void *, int, const msg_item_t *,
                                const char *, va_list);

VLC_API msg_subscription_t *vlc_Subscribe(msg_callback_t, void *) VLC_USED;
VLC_API void vlc_Unsubscribe(msg_subscription_t *);

/**
 * @}
 */
#endif
