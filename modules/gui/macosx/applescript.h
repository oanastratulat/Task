/*****************************************************************************
 * applescript.h: MacOS X AppleScript support
 *****************************************************************************
 * Copyright (C) 2002-2003, 2005, 2007 VLC authors and VideoLAN
 * $Id: 990d44990e6ee3ded040782410a2586684fb7543 $
 *
 * Authors: Derk-Jan Hartman <thedj@users.sourceforge.net>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston MA 02110-1301, USA.
 *****************************************************************************/

#import <Cocoa/Cocoa.h>

/*****************************************************************************
 * VLGetURLScriptCommand interface
 *****************************************************************************/
@interface VLGetURLScriptCommand : NSScriptCommand
@end

/*****************************************************************************
 * VLControlScriptCommand interface
 *****************************************************************************/
@interface VLControlScriptCommand : NSScriptCommand
@end

/*****************************************************************************
* Category that adds AppleScript support to NSApplication
*****************************************************************************/
@interface NSApplication(ScriptSupport)

- (BOOL)scriptFullscreenMode;
- (void)setScriptFullscreenMode: (BOOL)mode;

- (double)audioVolume;
- (void)setAudioVolume: (double)mode;

- (int)currentTime;
- (void)setCurrentTime: (int)mode;

- (int) durationOfCurrentItem;
- (NSString*) pathOfCurrentItem;
- (NSString*) nameOfCurrentItem;

@end
