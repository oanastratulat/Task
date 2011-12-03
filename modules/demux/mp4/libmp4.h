/*****************************************************************************
 * libmp4.h : LibMP4 library for mp4 module for vlc
 *****************************************************************************
 * Copyright (C) 2001-2004, 2010 the VideoLAN team
 *
 * Authors: Laurent Aimar <fenrir@via.ecp.fr>
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

#ifndef _VLC_MP4_H
#define _VLC_MP4_H 1

#define ATOM_root VLC_FOURCC( 'r', 'o', 'o', 't' )
#define ATOM_uuid VLC_FOURCC( 'u', 'u', 'i', 'd' )

#define ATOM_ftyp VLC_FOURCC( 'f', 't', 'y', 'p' )
#define ATOM_moov VLC_FOURCC( 'm', 'o', 'o', 'v' )
#define ATOM_foov VLC_FOURCC( 'f', 'o', 'o', 'v' )
#define ATOM_cmov VLC_FOURCC( 'c', 'm', 'o', 'v' )
#define ATOM_dcom VLC_FOURCC( 'd', 'c', 'o', 'm' )
#define ATOM_cmvd VLC_FOURCC( 'c', 'm', 'v', 'd' )

#define ATOM_moof VLC_FOURCC( 'm', 'o', 'o', 'f' )
#define ATOM_mdat VLC_FOURCC( 'm', 'd', 'a', 't' )
#define ATOM_skip VLC_FOURCC( 's', 'k', 'i', 'p' )
#define ATOM_free VLC_FOURCC( 'f', 'r', 'e', 'e' )
#define ATOM_udta VLC_FOURCC( 'u', 'd', 't', 'a' )
#define ATOM_wide VLC_FOURCC( 'w', 'i', 'd', 'e' )

#define ATOM_data VLC_FOURCC( 'd', 'a', 't', 'a' )

#define ATOM_trak VLC_FOURCC( 't', 'r', 'a', 'k' )
#define ATOM_mvhd VLC_FOURCC( 'm', 'v', 'h', 'd' )
#define ATOM_tkhd VLC_FOURCC( 't', 'k', 'h', 'd' )
#define ATOM_tref VLC_FOURCC( 't', 'r', 'e', 'f' )
#define ATOM_mdia VLC_FOURCC( 'm', 'd', 'i', 'a' )
#define ATOM_mdhd VLC_FOURCC( 'm', 'd', 'h', 'd' )
#define ATOM_hdlr VLC_FOURCC( 'h', 'd', 'l', 'r' )
#define ATOM_minf VLC_FOURCC( 'm', 'i', 'n', 'f' )
#define ATOM_vmhd VLC_FOURCC( 'v', 'm', 'h', 'd' )
#define ATOM_smhd VLC_FOURCC( 's', 'm', 'h', 'd' )
#define ATOM_hmhd VLC_FOURCC( 'h', 'm', 'h', 'd' )
#define ATOM_dinf VLC_FOURCC( 'd', 'i', 'n', 'f' )
#define ATOM_url  VLC_FOURCC( 'u', 'r', 'l', ' ' )
#define ATOM_urn  VLC_FOURCC( 'u', 'r', 'n', ' ' )
#define ATOM_dref VLC_FOURCC( 'd', 'r', 'e', 'f' )
#define ATOM_stbl VLC_FOURCC( 's', 't', 'b', 'l' )
#define ATOM_stts VLC_FOURCC( 's', 't', 't', 's' )
#define ATOM_ctts VLC_FOURCC( 'c', 't', 't', 's' )
#define ATOM_stsd VLC_FOURCC( 's', 't', 's', 'd' )
#define ATOM_stsz VLC_FOURCC( 's', 't', 's', 'z' )
#define ATOM_stz2 VLC_FOURCC( 's', 't', 'z', '2' )
#define ATOM_stsc VLC_FOURCC( 's', 't', 's', 'c' )
#define ATOM_stco VLC_FOURCC( 's', 't', 'c', 'o' )
#define ATOM_co64 VLC_FOURCC( 'c', 'o', '6', '4' )
#define ATOM_stss VLC_FOURCC( 's', 't', 's', 's' )
#define ATOM_stsh VLC_FOURCC( 's', 't', 's', 'h' )
#define ATOM_stdp VLC_FOURCC( 's', 't', 'd', 'p' )
#define ATOM_padb VLC_FOURCC( 'p', 'a', 'd', 'b' )
#define ATOM_edts VLC_FOURCC( 'e', 'd', 't', 's' )
#define ATOM_elst VLC_FOURCC( 'e', 'l', 's', 't' )
#define ATOM_mvex VLC_FOURCC( 'm', 'v', 'e', 'x' )
#define ATOM_sdtp VLC_FOURCC( 's', 'd', 't', 'p' )
#define ATOM_trex VLC_FOURCC( 't', 'r', 'e', 'x' )
#define ATOM_mehd VLC_FOURCC( 'm', 'e', 'h', 'd' )
#define ATOM_mfhd VLC_FOURCC( 'm', 'f', 'h', 'd' )
#define ATOM_traf VLC_FOURCC( 't', 'r', 'a', 'f' )
#define ATOM_tfhd VLC_FOURCC( 't', 'f', 'h', 'd' )
#define ATOM_trun VLC_FOURCC( 't', 'r', 'u', 'n' )
#define ATOM_cprt VLC_FOURCC( 'c', 'p', 'r', 't' )
#define ATOM_iods VLC_FOURCC( 'i', 'o', 'd', 's' )
#define ATOM_pasp VLC_FOURCC( 'p', 'a', 's', 'p' )
#define ATOM_mfra VLC_FOURCC( 'm', 'f', 'r', 'a' )
#define ATOM_mfro VLC_FOURCC( 'm', 'f', 'r', 'o' )
#define ATOM_tfra VLC_FOURCC( 't', 'f', 'r', 'a' )

#define ATOM_nmhd VLC_FOURCC( 'n', 'm', 'h', 'd' )
#define ATOM_mp2v VLC_FOURCC( 'm', 'p', '2', 'v' )
#define ATOM_mp4v VLC_FOURCC( 'm', 'p', '4', 'v' )
#define ATOM_mp4a VLC_FOURCC( 'm', 'p', '4', 'a' )
#define ATOM_mp4s VLC_FOURCC( 'm', 'p', '4', 's' )
#define ATOM_vide VLC_FOURCC( 'v', 'i', 'd', 'e' )
#define ATOM_soun VLC_FOURCC( 's', 'o', 'u', 'n' )
#define ATOM_hint VLC_FOURCC( 'h', 'i', 'n', 't' )
#define ATOM_hdv2 VLC_FOURCC( 'h', 'd', 'v', '2' )

#define ATOM_dpnd VLC_FOURCC( 'd', 'p', 'n', 'd' )
#define ATOM_ipir VLC_FOURCC( 'i', 'p', 'i', 'r' )
#define ATOM_mpod VLC_FOURCC( 'm', 'p', 'o', 'd' )
#define ATOM_hnti VLC_FOURCC( 'h', 'n', 't', 'i' )
#define ATOM_rtp  VLC_FOURCC( 'r', 't', 'p', ' ' )

#define ATOM_isom VLC_FOURCC( 'i', 's', 'o', 'm' )
#define ATOM_3gp4 VLC_FOURCC( '3', 'g', 'p', '4' )
#define ATOM_esds VLC_FOURCC( 'e', 's', 'd', 's' )

#define ATOM__mp3 VLC_FOURCC( '.', 'm', 'p', '3' )
#define ATOM_ms02 VLC_FOURCC( 'm', 's', 0x0, 0x02 )
#define ATOM_ms11 VLC_FOURCC( 'm', 's', 0x0, 0x11 )
#define ATOM_ms55 VLC_FOURCC( 'm', 's', 0x0, 0x55 )
#define ATOM_twos VLC_FOURCC( 't', 'w', 'o', 's' )
#define ATOM_sowt VLC_FOURCC( 's', 'o', 'w', 't' )
#define ATOM_QDMC VLC_FOURCC( 'Q', 'D', 'M', 'C' )
#define ATOM_QDM2 VLC_FOURCC( 'Q', 'D', 'M', '2' )
#define ATOM_ima4 VLC_FOURCC( 'i', 'm', 'a', '4' )
#define ATOM_IMA4 VLC_FOURCC( 'I', 'M', 'A', '4' )
#define ATOM_dvi  VLC_FOURCC( 'd', 'v', 'i', ' ' )
#define ATOM_MAC3 VLC_FOURCC( 'M', 'A', 'C', '3' )
#define ATOM_MAC6 VLC_FOURCC( 'M', 'A', 'C', '6' )
#define ATOM_alaw VLC_FOURCC( 'a', 'l', 'a', 'w' )
#define ATOM_ulaw VLC_FOURCC( 'u', 'l', 'a', 'w' )
#define ATOM_Qclp VLC_FOURCC( 'Q', 'c', 'l', 'p' )
#define ATOM_samr VLC_FOURCC( 's', 'a', 'm', 'r' )
#define ATOM_sawb VLC_FOURCC( 's', 'a', 'w', 'b' )
#define ATOM_OggS VLC_FOURCC( 'O', 'g', 'g', 'S' )
#define ATOM_alac VLC_FOURCC( 'a', 'l', 'a', 'c' )
#define ATOM_dac3 VLC_FOURCC( 'd', 'a', 'c', '3' )
#define ATOM_dec3 VLC_FOURCC( 'd', 'e', 'c', '3' )
#define ATOM_enda VLC_FOURCC( 'e', 'n', 'd', 'a' )
#define ATOM_gnre VLC_FOURCC( 'g', 'n', 'r', 'e' )
#define ATOM_trkn VLC_FOURCC( 't', 'r', 'k', 'n' )

#define ATOM_zlib VLC_FOURCC( 'z', 'l', 'i', 'b' )
#define ATOM_SVQ1 VLC_FOURCC( 'S', 'V', 'Q', '1' )
#define ATOM_SVQ3 VLC_FOURCC( 'S', 'V', 'Q', '3' )
#define ATOM_ZyGo VLC_FOURCC( 'Z', 'y', 'G', 'o' )
#define ATOM_3IV1 VLC_FOURCC( '3', 'I', 'V', '1' )
#define ATOM_3iv1 VLC_FOURCC( '3', 'i', 'v', '1' )
#define ATOM_3IV2 VLC_FOURCC( '3', 'I', 'V', '2' )
#define ATOM_3iv2 VLC_FOURCC( '3', 'i', 'v', '2' )
#define ATOM_3IVD VLC_FOURCC( '3', 'I', 'V', 'D' )
#define ATOM_3ivd VLC_FOURCC( '3', 'i', 'v', 'd' )
#define ATOM_3VID VLC_FOURCC( '3', 'V', 'I', 'D' )
#define ATOM_3vid VLC_FOURCC( '3', 'v', 'i', 'd' )
#define ATOM_h263 VLC_FOURCC( 'h', '2', '6', '3' )
#define ATOM_s263 VLC_FOURCC( 's', '2', '6', '3' )
#define ATOM_DIVX VLC_FOURCC( 'D', 'I', 'V', 'X' )
#define ATOM_XVID VLC_FOURCC( 'X', 'V', 'I', 'D' )
#define ATOM_cvid VLC_FOURCC( 'c', 'v', 'i', 'd' )
#define ATOM_mjpa VLC_FOURCC( 'm', 'j', 'p', 'a' )
#define ATOM_mjpb VLC_FOURCC( 'm', 'j', 'q', 't' )
#define ATOM_mjqt VLC_FOURCC( 'm', 'j', 'h', 't' )
#define ATOM_mjht VLC_FOURCC( 'm', 'j', 'p', 'b' )
#define ATOM_VP31 VLC_FOURCC( 'V', 'P', '3', '1' )
#define ATOM_vp31 VLC_FOURCC( 'v', 'p', '3', '1' )
#define ATOM_h264 VLC_FOURCC( 'h', '2', '6', '4' )
#define ATOM_qdrw VLC_FOURCC( 'q', 'd', 'r', 'w' )

#define ATOM_avc1 VLC_FOURCC( 'a', 'v', 'c', '1' )
#define ATOM_avcC VLC_FOURCC( 'a', 'v', 'c', 'C' )
#define ATOM_m4ds VLC_FOURCC( 'm', '4', 'd', 's' )

#define ATOM_dvc  VLC_FOURCC( 'd', 'v', 'c', ' ' )
#define ATOM_dvp  VLC_FOURCC( 'd', 'v', 'p', ' ' )
#define ATOM_dv5n VLC_FOURCC( 'd', 'v', '5', 'n' )
#define ATOM_dv5p VLC_FOURCC( 'd', 'v', '5', 'p' )
#define ATOM_raw  VLC_FOURCC( 'r', 'a', 'w', ' ' )

#define ATOM_jpeg VLC_FOURCC( 'j', 'p', 'e', 'g' )

#define ATOM_yv12 VLC_FOURCC( 'y', 'v', '1', '2' )
#define ATOM_yuv2 VLC_FOURCC( 'y', 'u', 'v', '2' )

#define ATOM_rmra VLC_FOURCC( 'r', 'm', 'r', 'a' )
#define ATOM_rmda VLC_FOURCC( 'r', 'm', 'd', 'a' )
#define ATOM_rdrf VLC_FOURCC( 'r', 'd', 'r', 'f' )
#define ATOM_rmdr VLC_FOURCC( 'r', 'm', 'd', 'r' )
#define ATOM_rmvc VLC_FOURCC( 'r', 'm', 'v', 'c' )
#define ATOM_rmcd VLC_FOURCC( 'r', 'm', 'c', 'd' )
#define ATOM_rmqu VLC_FOURCC( 'r', 'm', 'q', 'u' )
#define ATOM_alis VLC_FOURCC( 'a', 'l', 'i', 's' )

#define ATOM_gmhd VLC_FOURCC( 'g', 'm', 'h', 'd' )
#define ATOM_wave VLC_FOURCC( 'w', 'a', 'v', 'e' )

#define ATOM_drms VLC_FOURCC( 'd', 'r', 'm', 's' )
#define ATOM_sinf VLC_FOURCC( 's', 'i', 'n', 'f' )
#define ATOM_schi VLC_FOURCC( 's', 'c', 'h', 'i' )
#define ATOM_user VLC_FOURCC( 'u', 's', 'e', 'r' )
#define ATOM_key  VLC_FOURCC( 'k', 'e', 'y', ' ' )
#define ATOM_iviv VLC_FOURCC( 'i', 'v', 'i', 'v' )
#define ATOM_name VLC_FOURCC( 'n', 'a', 'm', 'e' )
#define ATOM_priv VLC_FOURCC( 'p', 'r', 'i', 'v' )
#define ATOM_drmi VLC_FOURCC( 'd', 'r', 'm', 'i' )
#define ATOM_frma VLC_FOURCC( 'f', 'r', 'm', 'a' )
#define ATOM_skcr VLC_FOURCC( 's', 'k', 'c', 'r' )

#define ATOM_text VLC_FOURCC( 't', 'e', 'x', 't' )
#define ATOM_tx3g VLC_FOURCC( 't', 'x', '3', 'g' )
#define ATOM_subp VLC_FOURCC( 's', 'u', 'b', 'p' )
#define ATOM_sbtl VLC_FOURCC( 's', 'b', 't', 'l' )

#define ATOM_0xa9nam VLC_FOURCC( 0xa9, 'n', 'a', 'm' )
#define ATOM_0xa9aut VLC_FOURCC( 0xa9, 'a', 'u', 't' )
#define ATOM_0xa9cpy VLC_FOURCC( 0xa9, 'c', 'p', 'y' )
#define ATOM_0xa9inf VLC_FOURCC( 0xa9, 'i', 'n', 'f' )
#define ATOM_0xa9ART VLC_FOURCC( 0xa9, 'A', 'R', 'T' )
#define ATOM_0xa9des VLC_FOURCC( 0xa9, 'd', 'e', 's' )
#define ATOM_0xa9dir VLC_FOURCC( 0xa9, 'd', 'i', 'r' )
#define ATOM_0xa9cmt VLC_FOURCC( 0xa9, 'c', 'm', 't' )
#define ATOM_0xa9req VLC_FOURCC( 0xa9, 'r', 'e', 'q' )
#define ATOM_0xa9day VLC_FOURCC( 0xa9, 'd', 'a', 'y' )
#define ATOM_0xa9fmt VLC_FOURCC( 0xa9, 'f', 'm', 't' )
#define ATOM_0xa9prd VLC_FOURCC( 0xa9, 'p', 'r', 'd' )
#define ATOM_0xa9prf VLC_FOURCC( 0xa9, 'p', 'r', 'f' )
#define ATOM_0xa9src VLC_FOURCC( 0xa9, 's', 'r', 'c' )
#define ATOM_0xa9alb VLC_FOURCC( 0xa9, 'a', 'l', 'b' )
#define ATOM_0xa9dis VLC_FOURCC( 0xa9, 'd', 'i', 's' )
#define ATOM_0xa9enc VLC_FOURCC( 0xa9, 'e', 'n', 'c' )
#define ATOM_0xa9trk VLC_FOURCC( 0xa9, 't', 'r', 'k' )
#define ATOM_0xa9url VLC_FOURCC( 0xa9, 'u', 'r', 'l' )
#define ATOM_0xa9dsa VLC_FOURCC( 0xa9, 'd', 's', 'a' )
#define ATOM_0xa9hst VLC_FOURCC( 0xa9, 'h', 's', 't' )
#define ATOM_0xa9ope VLC_FOURCC( 0xa9, 'o', 'p', 'e' )
#define ATOM_0xa9wrt VLC_FOURCC( 0xa9, 'w', 'r', 't' )
#define ATOM_0xa9com VLC_FOURCC( 0xa9, 'c', 'o', 'm' )
#define ATOM_0xa9gen VLC_FOURCC( 0xa9, 'g', 'e', 'n' )
#define ATOM_0xa9too VLC_FOURCC( 0xa9, 't', 'o', 'o' )
#define ATOM_0xa9wrn VLC_FOURCC( 0xa9, 'w', 'r', 'n' )
#define ATOM_0xa9swr VLC_FOURCC( 0xa9, 's', 'w', 'r' )
#define ATOM_0xa9mak VLC_FOURCC( 0xa9, 'm', 'a', 'k' )
#define ATOM_0xa9mod VLC_FOURCC( 0xa9, 'm', 'o', 'd' )
#define ATOM_0xa9PRD VLC_FOURCC( 0xa9, 'P', 'R', 'D' )
#define ATOM_0xa9grp VLC_FOURCC( 0xa9, 'g', 'r', 'p' )
#define ATOM_0xa9lyr VLC_FOURCC( 0xa9, 'g', 'r', 'p' )
#define ATOM_chpl VLC_FOURCC( 'c', 'h', 'p', 'l' )
#define ATOM_WLOC VLC_FOURCC( 'W', 'L', 'O', 'C' )

#define ATOM_meta VLC_FOURCC( 'm', 'e', 't', 'a' )
#define ATOM_ilst VLC_FOURCC( 'i', 'l', 's', 't' )

#define ATOM_chap VLC_FOURCC( 'c', 'h', 'a', 'p' )

/* Do you want some debug information on all read boxes ? */
//#define MP4_VERBOSE  1


struct MP4_Box_s;


/* uuid Universal Unique IDentifiers */
typedef struct UUID_s
{
  uint8_t b[16];
} UUID_t;

/* specific structure for all boxes */

typedef struct MP4_Box_data_ftyp_s
{
  uint32_t i_major_brand;
  uint32_t i_minor_version;

  uint32_t i_compatible_brands_count;
  uint32_t *i_compatible_brands;

} MP4_Box_data_ftyp_t;

typedef struct MP4_Box_data_mvhd_s
{
  uint8_t  i_version;
  uint32_t i_flags;

  uint64_t i_creation_time;
  uint64_t i_modification_time;
  uint32_t i_timescale;
  uint64_t i_duration;

  int32_t  i_rate;
  int16_t  i_volume;
  int16_t  i_reserved1;
  uint32_t i_reserved2[2];
  int32_t  i_matrix[9];
  uint32_t i_predefined[6];
  uint32_t i_next_track_id;

} MP4_Box_data_mvhd_t;

#define MP4_TRACK_ENABLED  0x000001
#define MP4_TRACK_IN_MOVIE 0x000002
#define MP4_TRACK_IN_PREVIEW 0x000004
typedef struct MP4_Box_data_tkhd_s
{
  uint8_t  i_version;
  uint32_t i_flags;

  uint64_t i_creation_time;
  uint64_t i_modification_time;
  uint32_t i_track_ID;
  uint32_t i_reserved;
  uint64_t i_duration;

  uint32_t i_reserved2[2];
  int16_t  i_layer;
  int16_t  i_predefined;

  int16_t  i_volume;
  uint16_t i_reserved3;
  int32_t  i_matrix[9];
  int32_t  i_width;
  int32_t  i_height;

} MP4_Box_data_tkhd_t;

typedef struct MP4_Box_data_mdhd_s
{
  uint8_t  i_version;
  uint32_t i_flags;

  uint64_t i_creation_time;
  uint64_t i_modification_time;
  uint32_t i_timescale;
  uint64_t i_duration;

  /* one bit for pad */
  uint16_t  i_language_code;
  /* unsigned int(5)[3] language difference with 0x60*/
  unsigned char i_language[3];
  uint16_t i_predefined;

} MP4_Box_data_mdhd_t;

typedef struct MP4_Box_data_hdlr_s
{
  uint8_t  i_version;
  uint32_t i_flags;

  uint32_t i_predefined;
  uint32_t i_handler_type; /* "vide" "soun" "hint" "odsm"
         "crsm" "sdsm" "m7sm" "ocsm"
         "ipsm" "mjsm" */

  unsigned char *psz_name; /* in UTF-8 */

} MP4_Box_data_hdlr_t;

typedef struct MP4_Box_data_vmhd_s
{
  uint8_t  i_version;
  uint32_t i_flags;

  int16_t  i_graphics_mode;
  int16_t  i_opcolor[3];

} MP4_Box_data_vmhd_t;

typedef struct MP4_Box_data_smhd_s
{
  uint8_t  i_version;
  uint32_t i_flags;

  int16_t  i_balance;
  int16_t  i_reserved;

} MP4_Box_data_smhd_t;

typedef struct MP4_Box_data_hmhd_s
{
  uint8_t  i_version;
  uint32_t i_flags;

  uint16_t i_max_PDU_size;
  uint16_t i_avg_PDU_size;
  uint32_t i_max_bitrate;
  uint32_t i_avg_bitrate;
  uint32_t i_reserved;

} MP4_Box_data_hmhd_t;

typedef struct MP4_Box_data_url_s
{
  uint8_t  i_version;
  uint32_t i_flags;

  char *psz_location;

} MP4_Box_data_url_t;

typedef struct MP4_Box_data_urn_s
{
  uint8_t  i_version;
  uint32_t i_flags;

  char *psz_name;
  char *psz_location;

} MP4_Box_data_urn_t;

typedef struct MP4_Box_data_dref_s
{
  uint8_t  i_version;
  uint32_t i_flags;

  uint32_t i_entry_count;
/* XXX it's also a container with i_entry_count entry */
} MP4_Box_data_dref_t;

typedef struct MP4_Box_data_stts_s
{
  uint8_t  i_version;
  uint32_t i_flags;

  uint32_t i_entry_count;
  uint32_t *i_sample_count; /* these are array */
  int32_t  *i_sample_delta;

} MP4_Box_data_stts_t;

typedef struct MP4_Box_data_ctts_s
{
  uint8_t  i_version;
  uint32_t i_flags;

  uint32_t i_entry_count;

  uint32_t *i_sample_count; /* these are array */
  int32_t  *i_sample_offset;

} MP4_Box_data_ctts_t;


typedef struct MP4_Box_data_sample_soun_s
{
  uint8_t  i_reserved1[6];
  uint16_t i_data_reference_index;

  //uint32_t i_reserved2[2];
  uint16_t i_qt_version;
  uint16_t i_qt_revision_level;
  uint32_t i_qt_vendor;

  uint16_t i_channelcount;
  uint16_t i_samplesize;
  uint16_t i_predefined;
  uint16_t i_reserved3;
  uint16_t i_sampleratehi; /* timescale of track */
  uint16_t i_sampleratelo;

  /* for version 1 (i_reserved1[0] == 1) */
  uint32_t i_sample_per_packet;
  uint32_t i_bytes_per_packet;
  uint32_t i_bytes_per_frame;
  uint32_t i_bytes_per_sample;

  /* XXX hack */
  int   i_qt_description;
  uint8_t *p_qt_description;

  void  *p_drms;

} MP4_Box_data_sample_soun_t;

typedef struct MP4_Box_data_sample_vide_s
{
  uint8_t  i_reserved1[6];
  uint16_t i_data_reference_index;

  uint16_t i_qt_version;
  uint16_t i_qt_revision_level;
  uint32_t i_qt_vendor;

  uint32_t i_qt_temporal_quality;
  uint32_t i_qt_spatial_quality;

  int16_t  i_width;
  int16_t  i_height;

  uint32_t i_horizresolution;
  uint32_t i_vertresolution;

  uint32_t i_qt_data_size;
  uint16_t i_qt_frame_count;

  uint8_t  i_compressorname[32];
  int16_t  i_depth;

  int16_t  i_qt_color_table;

  /* XXX hack ImageDescription */
  int   i_qt_image_description;
  uint8_t *p_qt_image_description;

  void  *p_drms;

} MP4_Box_data_sample_vide_t;

#define MP4_TEXT_DISPLAY_FLAG_DONT_DISPLAY   (1<<0)
#define MP4_TEXT_DISPLAY_FLAG_AUTO_SCALE   (1<<1)
#define MP4_TEXT_DISPLAY_FLAG_CLIP_TO_TEXT_BOX (1<<2)
#define MP4_TEXT_DISPLAY_FLAG_USE_MOVIE_BG_COLOR (1<<3)
#define MP4_TEXT_DISPLAY_FLAG_SHRINK_TEXT_BOX_TO_FIT (1<<4)
#define MP4_TEXT_DISPLAY_FLAG_SCROLL_IN    (1<<5)
#define MP4_TEXT_DISPLAY_FLAG_SCROLL_OUT   (1<<6)
#define MP4_TEXT_DISPLAY_FLAG_HORIZONTAL_SCROLL  (1<<7)
#define MP4_TEXT_DISPLAY_FLAG_REVERSE_SCROLL   (1<<8)
#define MP4_TEXT_DISPLAY_FLAG_CONTINUOUS_SCROLL  (1<<9)
#define MP4_TEXT_DISPLAY_FLAG_FLOW_HORIZONTAL  (1<<10)
#define MP4_TEXT_DISPLAY_FLAG_CONTINUOUS_KARAOKE (1<<11)
#define MP4_TEXT_DISPLAY_FLAG_DROP_SHADOW    (1<<12)
#define MP4_TEXT_DISPLAY_FLAG_ANTI_ALIAS   (1<<13)
#define MP4_TEXT_DISPLAY_FLAG_KEYED_TEXT   (1<<14)
#define MP4_TEXT_DISPLAY_FLAG_INVERSE_HILITE   (1<<15)
#define MP4_TEXT_DISPLAY_FLAG_COLOR_HILITE   (1<<16)
#define MP4_TEXT_DISPLAY_FLAG_WRITE_VERTICALLY (1<<17)

typedef struc
{
  uint32_t i_reserved1;
  uint16_t i_reserved2;

  uint16_t i_data_reference_index;

  uint32_t i_display_flags; // TextDescription and Tx3gDescription

  int8_t i_justification_horizontal; // left(0), centered(1), right(-1)
  int8_t i_justification_vertical; // top(0), centered(1), bottom(-1)

  uint16_t i_background_color[4];

  uint16_t i_text_box_top;
  uint16_t i_text_box_left;
  uint16_t i_text_box_bottom;
  uint16_t i_text_box_right;

  // TODO to complete
} MP4_Box_data_sample_text_t;

typedef struct MP4_Box_data_sample_hint_s
{
  uint8_t  i_reserved1[6];
  uint16_t i_data_reference_index;

  uint8_t *p_data;

} MP4_Box_data_sample_hint_t;

typedef struct MP4_Box_data_moviehintinformation_rtp_s
{
  uint32_t i_description_format;
  unsigned char *psz_text;

} MP4_Box_data_moviehintinformation_rtp_t;



typedef struct MP4_Box_data_stsd_s
{
  uint8_t  i_version;
  uint32_t i_flags;

  uint32_t i_entry_count;

  /* it contains SampleEntry handled as if it was Box */

} MP4_Box_data_stsd_t;


typedef struct MP4_Box_data_stsz_s
{
  uint8_t  i_version;
  uint32_t i_flags;

  uint32_t i_sample_size;
  uint32_t i_sample_count;

  uint32_t *i_entry_size; /* array , empty if i_sample_size != 0 */

} MP4_Box_data_stsz_t;

typedef struct MP4_Box_data_stz2_s
{
  uint8_t  i_version;
  uint32_t i_flags;

  uint32_t i_sample_size; /* 24 bits */
  uint8_t  i_field_size;
  uint32_t i_sample_count;

  uint32_t *i_entry_size; /* array: unsigned int(i_field_size) entry_size */

} MP4_Box_data_stz2_t;

typedef struct MP4_Box_data_stsc_s
{
  uint8_t  i_version;
  uint32_t i_flags;

  uint32_t i_entry_count;

  uint32_t *i_first_chunk; /* theses are arrays */
  uint32_t *i_samples_per_chunk;
  uint32_t *i_sample_description_index;

} MP4_Box_data_stsc_t;


typedef struct MP4_Box_data_co64_s
{
  uint8_t  i_version;
  uint32_t i_flags;

  uint32_t i_entry_count;

  uint64_t *i_chunk_offset;

} MP4_Box_data_co64_t;


typedef struct MP4_Box_data_stss_s
{
  uint8_t  i_version;
  uint32_t i_flags;

  uint32_t i_entry_count;

  uint32_t *i_sample_number;

} MP4_Box_data_stss_t;

typedef struct MP4_Box_data_stsh_s
{
  uint8_t  i_version;
  uint32_t i_flags;

  uint32_t i_entry_count;

  uint32_t *i_shadowed_sample_number;
  uint32_t *i_sync_sample_number;

} MP4_Box_data_stsh_t;

typedef struct MP4_Box_data_stdp_s
{
  uint8_t  i_version;
  uint32_t i_flags;

  uint16_t *i_priority;

} MP4_Box_data_stdp_t;

typedef struct MP4_Box_data_padb_s
{
  uint8_t  i_version;
  uint32_t i_flags;

  uint32_t i_sample_count;

  uint16_t *i_reserved1; /* 1bit  */
  uint16_t *i_pad2;    /* 3bits */
  uint16_t *i_reserved2; /* 1bit  */
  uint16_t *i_pad1;    /* 3bits */


} MP4_Box_data_padb_t;


typedef struct MP4_Box_data_elst_s
{
  uint8_t  i_version;
  uint32_t i_flags;

  uint32_t i_entry_count;

  uint64_t *i_segment_duration;
  int64_t  *i_media_time;
  uint16_t *i_media_rate_integer;
  uint16_t *i_media_rate_fraction;


} MP4_Box_data_elst_t;

typedef struct MP4_Box_data_cprt_s
{
  uint8_t  i_version;
  uint32_t i_flags;
  /* 1 pad bit */
  unsigned char i_language[3];

  char *psz_notice;
} MP4_Box_data_cprt_t;


/* DecoderConfigDescriptor */
typedef struct MP4_descriptor_decoder_config_s
{
  uint8_t i_objectTypeIndication;
  uint8_t i_streamType;
  int   b_upStream;
  int   i_buffer_sizeDB;
  int   i_max_bitrate;
  int   i_avg_bitrate;

  int   i_decoder_specific_info_len;
  uint8_t *p_decoder_specific_info;
  /* some other stuff */

} MP4_descriptor_decoder_config_t;

typedef struct MP4_descriptor_SL_config_s
{

  int i_dummy; /* ANSI C forbids empty structures */

} MP4_descriptor_SL_config_t;


typedef struct MP4_descriptor_ES_s
{
  uint16_t i_ES_ID;
  int  b_stream_dependence;
  int  b_url;
  int  b_OCRstream;
  int  i_stream_priority;

  int  i_depend_on_ES_ID; /* if b_stream_dependence set */

  unsigned char *psz_URL;

  uint16_t i_OCR_ES_ID;   /* if b_OCRstream */
  MP4_descriptor_decoder_config_t *p_decConfigDescr;

  MP4_descriptor_SL_config_t *p_slConfigDescr;

  /* some other stuff ... */

} MP4_descriptor_ES_t;

/* ES descriptor */
typedef struct MP4_Box_data_esds_s
{
  uint8_t  i_version;
  uint32_t i_flags;

  MP4_descriptor_ES_t es_descriptor;

} MP4_Box_data_esds_t;


typedef struct MP4_Box_data_dcom_s
{
  uint32_t i_algorithm; /* fourcc */

} MP4_Box_data_dcom_t;

typedef struct MP4_Box_data_cmvd_s
{
  uint32_t i_uncompressed_size;
  uint32_t i_compressed_size;

  int   b_compressed; /* Set to 1 if compressed data, 0 if uncompressed */
  uint8_t *p_data;

} MP4_Box_data_cmvd_t;

typedef struct MP4_Box_data_cmov_s
{
  struct MP4_Box_s *p_moov; /* uncompressed moov */

} MP4_Box_data_cmov_t;

typedef struc
{
  uint32_t i_type;
} MP4_Box_data_frma_t;

typedef struc
{
  uint32_t i_init;
  uint32_t i_encr;
  uint32_t i_decr;
} MP4_Box_data_skcr_t;

typedef struc
{
  uint8_t  i_version;
  uint32_t i_flags;

  uint32_t i_ref_type;
  char   *psz_ref;

} MP4_Box_data_rdrf_t;

typedef struc
{
  uint8_t  i_version;
  uint32_t i_flags;

  uint32_t i_rate;

} MP4_Box_data_rmdr_t;

typedef struc
{
  uint8_t  i_version;
  uint32_t i_flags;

  uint32_t i_gestaltType;
  uint32_t i_val1;
  uint32_t i_val2;
  uint16_t i_checkType; /* 0: val1 is version min
           1: gestalt value & val2 == val1 */

} MP4_Box_data_rmvc_t;

typedef struc
{
  uint8_t  i_version;
  uint32_t i_flags;


} MP4_Box_data_rmcd_t;

typedef struc
{
  uint32_t i_quality;

} MP4_Box_data_rmqu_t;

typedef struct MP4_Box_data_mfhd_s
{
  uint32_t i_sequence_number;

  uint8_t *p_vendor_extension;

} MP4_Box_data_mfhd_t;

#define MP4_TFHD_BASE_DATA_OFFSET   (1LL<<0)
#define MP4_TFHD_SAMPLE_DESC_INDEX  (1LL<<1)
#define MP4_TFHD_DFLT_SAMPLE_DURATION (1LL<<3)
#define MP4_TFHD_DFLT_SAMPLE_SIZE   (1LL<<4)
#define MP4_TFHD_DFLT_SAMPLE_FLAGS  (1LL<<5)
typedef struct MP4_Box_data_tfhd_s
{
  uint8_t  i_version;
  uint32_t i_flags;
  uint32_t i_track_ID;

  /* optional fields */
  uint64_t i_base_data_offset;
  uint32_t i_sample_description_index;
  uint32_t i_default_sample_duration;
  uint32_t i_default_sample_size;
  uint32_t i_default_sample_flags;

} MP4_Box_data_tfhd_t;

#define MP4_TRUN_DATA_OFFSET   (1<<0)
#define MP4_TRUN_FIRST_FLAGS   (1<<2)
#define MP4_TRUN_SAMPLE_DURATION   (1<<8)
#define MP4_TRUN_SAMPLE_SIZE   (1<<9)
#define MP4_TRUN_SAMPLE_FLAGS    (1<<10)
#define MP4_TRUN_SAMPLE_TIME_OFFSET  (1<<11)
typedef struct MP4_descriptor_trun_sample_
{
  uint32_t i_duration;
  uint32_t i_size;
  uint32_t i_flags;
  uint32_t i_composition_time_offset;
} MP4_descriptor_trun_sample_t;

typedef struct MP4_Box_data_trun_s
{
  uint8_t  i_version;
  uint32_t i_flags;
  uint32_t i_sample_count;

  /* optional fields */
  uint32_t i_data_offset;
  uint32_t i_first_sample_flags;

  MP4_descriptor_trun_sample_t *p_samples;

} MP4_Box_data_trun_t;


typedef struc
{
  char *psz_text;

} MP4_Box_data_0xa9xxx_t;

typedef struc
{
  char *psz_text;

} MP4_Box_data_name_t;

typedef struc
{
  uint32_t i_entry_count;
  uint32_t *i_track_ID;

} MP4_Box_data_tref_generic_t;

typedef struc
{
  uint8_t  i_version;
  uint32_t i_flags;

  uint8_t i_chapter;
  struc
  {
    char  *psz_name;
    int64_t  i_start;
  } chapter[256];
} MP4_Box_data_chpl_t;

typedef struc
{
  uint8_t i_version;
  uint8_t i_profile;
  uint8_t i_profile_compatibility;
  uint8_t i_level;

  uint8_t i_reserved1;   /* 6 bits */
  uint8_t i_length_size;

  uint8_t i_reserved2;  /* 3 bits */
  uint8_t  i_sps;
  uint16_t *i_sps_length;
  uint8_t  **sps;

  uint8_t  i_pps;
  uint16_t *i_pps_length;
  uint8_t  **pps;

  /* XXX: Hack raw avcC atom payload */
  int   i_avcC;
  uint8_t *p_avcC;

} MP4_Box_data_avcC_t;

typedef struc
{
  uint8_t i_fscod;
  uint8_t i_bsid;
  uint8_t i_bsmod;
  uint8_t i_acmod;
  uint8_t i_lfeon;
  uint8_t i_bitrate_code;

} MP4_Box_data_dac3_t;

typedef struc
{
  uint16_t i_little_endian;

} MP4_Box_data_enda_t;

typedef struc
{
  uint16_t i_genre;

} MP4_Box_data_gnre_t;

typedef struc
{
  uint32_t i_track_number;
  uint32_t i_track_total;

} MP4_Box_data_trkn_t;

typedef struc
{
  uint8_t  i_version;
  uint32_t i_flags;

  uint16_t i_object_descriptor;
  uint8_t i_OD_profile_level;
  uint8_t i_scene_profile_level;
  uint8_t i_audio_profile_level;
  uint8_t i_visual_profile_level;
  uint8_t i_graphics_profile_level;

} MP4_Box_data_iods_t;

typedef struc
{
  uint32_t i_horizontal_spacing;
  uint32_t i_vertical_spacing;
} MP4_Box_data_pasp_t;

typedef struc
{
  uint8_t  i_version;
  uint32_t i_flags;

  uint64_t i_fragment_duration;
} MP4_Box_data_mehd_t;

typedef struc
{
  uint8_t  i_version;
  uint32_t i_flags;

  uint32_t i_track_ID;
  uint32_t i_default_sample_description_index;
  uint32_t i_default_sample_duration;
  uint32_t i_default_sample_size;
  uint32_t i_default_sample_flags;
} MP4_Box_data_trex_t;

typedef struc
{
  uint8_t  i_version;
  uint32_t i_flags;

  uint8_t *p_sample_table;
} MP4_Box_data_sdtp_t;

typedef struc
{
  uint8_t  i_version;
  uint32_t i_flags;

  uint32_t i_size;
} MP4_Box_data_mfro_t;

typedef struc
{
  uint8_t  i_version;
  uint32_t i_flags;

  uint32_t i_track_ID;
  uint32_t i_number_of_entries;

  uint8_t i_length_size_of_traf_num;
  uint8_t i_length_size_of_trun_num;
  uint8_t i_length_size_of_sample_num;

  uint32_t *p_time;
  uint32_t *p_moof_offset;
  uint8_t *p_traf_number;
  uint8_t *p_trun_number;
  uint8_t *p_sample_number;
} MP4_Box_data_tfra_t;

/*
typedef struct MP4_Box_data__s
{
  uint8_t  i_version;
  uint32_t i_flags;

} MP4_Box_data__t;

*/

typedef union MP4_Box_data_s
{
  MP4_Box_data_ftyp_t *p_ftyp;
  MP4_Box_data_mvhd_t *p_mvhd;
  MP4_Box_data_mfhd_t *p_mfhd;
  MP4_Box_data_tfhd_t *p_tfhd;
  MP4_Box_data_trun_t *p_trun;
  MP4_Box_data_tkhd_t *p_tkhd;
  MP4_Box_data_mdhd_t *p_mdhd;
  MP4_Box_data_hdlr_t *p_hdlr;
  MP4_Box_data_vmhd_t *p_vmhd;
  MP4_Box_data_smhd_t *p_smhd;
  MP4_Box_data_hmhd_t *p_hmhd;
  MP4_Box_data_url_t  *p_url;
  MP4_Box_data_urn_t  *p_urn;
  MP4_Box_data_dref_t *p_dref;
  MP4_Box_data_stts_t *p_stts;
  MP4_Box_data_ctts_t *p_ctts;
  MP4_Box_data_stsd_t *p_stsd;
  MP4_Box_data_sample_vide_t *p_sample_vide;
  MP4_Box_data_sample_soun_t *p_sample_soun;
  MP4_Box_data_sample_text_t *p_sample_text;
  MP4_Box_data_sample_hint_t *p_sample_hint;

  MP4_Box_data_esds_t *p_esds;
  MP4_Box_data_avcC_t *p_avcC;
  MP4_Box_data_dac3_t *p_dac3;
  MP4_Box_data_enda_t *p_enda;
  MP4_Box_data_gnre_t *p_gnre;
  MP4_Box_data_trkn_t *p_trkn;
  MP4_Box_data_iods_t *p_iods;
  MP4_Box_data_pasp_t *p_pasp;
  MP4_Box_data_trex_t *p_trex;
  MP4_Box_data_mehd_t *p_mehd;
  MP4_Box_data_sdtp_t *p_sdtp;

  MP4_Box_data_tfra_t *p_tfra;
  MP4_Box_data_mfro_t *p_mfro;

  MP4_Box_data_stsz_t *p_stsz;
  MP4_Box_data_stz2_t *p_stz2;
  MP4_Box_data_stsc_t *p_stsc;
  MP4_Box_data_co64_t *p_co64;
  MP4_Box_data_stss_t *p_stss;
  MP4_Box_data_stsh_t *p_stsh;
  MP4_Box_data_stdp_t *p_stdp;
  MP4_Box_data_padb_t *p_padb;
  MP4_Box_data_elst_t *p_elst;
  MP4_Box_data_cprt_t *p_cprt;

  MP4_Box_data_dcom_t *p_dcom;
  MP4_Box_data_cmvd_t *p_cmvd;
  MP4_Box_data_cmov_t *p_cmov;

  MP4_Box_data_moviehintinformation_rtp_t p_moviehintinformation_rtp;

  MP4_Box_data_frma_t *p_frma;
  MP4_Box_data_skcr_t *p_skcr;

  MP4_Box_data_rdrf_t *p_rdrf;
  MP4_Box_data_rmdr_t *p_rmdr;
  MP4_Box_data_rmqu_t *p_rmqu;
  MP4_Box_data_rmvc_t *p_rmvc;

  MP4_Box_data_0xa9xxx_t *p_0xa9xxx;
  MP4_Box_data_chpl_t *p_chpl;
  MP4_Box_data_tref_generic_t *p_tref_generic;
  MP4_Box_data_name_t *p_name;

  void      *p_data; /* for unknow type */
} MP4_Box_data_t;



/* the most basic structure */
typedef struct MP4_Box_s
{
  off_t    i_pos;  /* absolute position */

  uint32_t   i_type;
  uint32_t   i_shortsize;

  UUID_t   i_uuid;  /* Set if i_type == "uuid" */

  uint64_t   i_size; /* always set so use it */

  MP4_Box_data_t data; /* union of pointers on extended data depending
            on i_type (or i_usertype) */

  struct MP4_Box_s *p_father; /* pointer on the father Box */

  struct MP4_Box_s *p_first;  /* pointer on the first child Box */
  struct MP4_Box_s *p_last;

  struct MP4_Box_s *p_next; /* pointer on the next boxes at the same level */

} MP4_Box_t;



/*****************************************************************************
 * MP4_BoxGetRoot : Parse the entire file, and create all boxes in memory
 *****************************************************************************
 *  The first box is a virtual box "root" and is the father for all firs
 *  level boxes
 *****************************************************************************/
MP4_Box_t *MP4_BoxGetRoot( stream_t * );

/*****************************************************************************
 * MP4_FreeBox : free memory allocated after read with MP4_ReadBox
 *     or MP4_BoxGetRoot, this means also children boxes
 * XXX : all children have to be allocated by a malloc !! and
 *   p_box is freed
 *****************************************************************************/
void MP4_BoxFree( stream_t *, MP4_Box_t *p_box );

/*****************************************************************************
 * MP4_DumpBoxStructure: print the structure of the p_box
 *****************************************************************************
 * Useful while debugging
 *****************************************************************************/
void MP4_BoxDumpStructure( stream_t *p_input, MP4_Box_t *p_box );

/*****************************************************************************
 * MP4_BoxGet: find a box given a path relative to p_box
 *****************************************************************************
 * Path Format: . .. / as usual
 *      [number] to specifie box number ex: trak[12]
 *
 * ex: /moov/trak[12]
 *   ../mdia
 *****************************************************************************/
MP4_Box_t *MP4_BoxGet( MP4_Box_t *p_box, const char *psz_fmt, ... );

/*****************************************************************************
 * MP4_BoxCount: find number of box given a path relative to p_box
 *****************************************************************************
 * Path Format: . .. / as usual
 *      [number] to specifie box number ex: trak[12]
 *
 * ex: /moov/trak
 *   ../mdia
 *****************************************************************************/
int MP4_BoxCount( MP4_Box_t *p_box, const char *psz_fmt, ... );

/* Internal functions exposed for MKV demux */
int MP4_ReadBoxCommon( stream_t *p_stream, MP4_Box_t *p_box );
int MP4_ReadBox_sample_vide( stream_t *p_stream, MP4_Box_t *p_box );
void MP4_FreeBox_sample_vide( MP4_Box_t *p_box );

#endif
