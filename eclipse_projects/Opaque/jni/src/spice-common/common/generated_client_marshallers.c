/* this is a file autogenerated by spice_codegen.py */
/*
  Copyright (C) 2013 Red Hat, Inc.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, see <http://www.gnu.org/licenses/>.
*/

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif
#include <common/messages.h>
#include <client_marshallers.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <spice/protocol.h>
#include <spice/macros.h>
#include "common/marshaller.h"

#ifdef _MSC_VER
#pragma warning(disable:4101)
#pragma warning(disable:4018)
#endif

static void spice_marshall_msgc_ack_sync(SPICE_GNUC_UNUSED SpiceMarshaller *m, SPICE_GNUC_UNUSED SpiceMsgcAckSync *msg)
{
    SPICE_GNUC_UNUSED SpiceMarshaller *m2;
    SpiceMsgcAckSync *src;
    src = (SpiceMsgcAckSync *)msg;

    spice_marshaller_add_uint32(m, src->generation);
}

static void spice_marshall_SpiceMsgEmpty(SPICE_GNUC_UNUSED SpiceMarshaller *m, SPICE_GNUC_UNUSED SpiceMsgEmpty *msg)
{
    SPICE_GNUC_UNUSED SpiceMarshaller *m2;
}

static void spice_marshall_msgc_pong(SPICE_GNUC_UNUSED SpiceMarshaller *m, SPICE_GNUC_UNUSED SpiceMsgPing *msg)
{
    SPICE_GNUC_UNUSED SpiceMarshaller *m2;
    SpiceMsgPing *src;
    src = (SpiceMsgPing *)msg;

    spice_marshaller_add_uint32(m, src->id);
    spice_marshaller_add_uint64(m, src->timestamp);
}

static void spice_marshall_SpiceMsgData(SPICE_GNUC_UNUSED SpiceMarshaller *m, SPICE_GNUC_UNUSED SpiceMsgData *msg)
{
    SPICE_GNUC_UNUSED SpiceMarshaller *m2;
}

static void spice_marshall_msgc_disconnecting(SPICE_GNUC_UNUSED SpiceMarshaller *m, SPICE_GNUC_UNUSED SpiceMsgDisconnect *msg)
{
    SPICE_GNUC_UNUSED SpiceMarshaller *m2;
    SpiceMsgDisconnect *src;
    src = (SpiceMsgDisconnect *)msg;

    spice_marshaller_add_uint64(m, src->time_stamp);
    spice_marshaller_add_uint32(m, src->reason);
}

static void spice_marshall_msgc_main_client_info(SPICE_GNUC_UNUSED SpiceMarshaller *m, SPICE_GNUC_UNUSED SpiceMsgcClientInfo *msg)
{
    SPICE_GNUC_UNUSED SpiceMarshaller *m2;
    SpiceMsgcClientInfo *src;
    src = (SpiceMsgcClientInfo *)msg;

    spice_marshaller_add_uint64(m, src->cache_size);
}

static void spice_marshall_msgc_main_mouse_mode_request(SPICE_GNUC_UNUSED SpiceMarshaller *m, SPICE_GNUC_UNUSED SpiceMsgcMainMouseModeRequest *msg)
{
    SPICE_GNUC_UNUSED SpiceMarshaller *m2;
    SpiceMsgcMainMouseModeRequest *src;
    src = (SpiceMsgcMainMouseModeRequest *)msg;

    spice_marshaller_add_uint16(m, src->mode);
}

static void spice_marshall_msgc_main_agent_start(SPICE_GNUC_UNUSED SpiceMarshaller *m, SPICE_GNUC_UNUSED SpiceMsgcMainAgentStart *msg)
{
    SPICE_GNUC_UNUSED SpiceMarshaller *m2;
    SpiceMsgcMainAgentStart *src;
    src = (SpiceMsgcMainAgentStart *)msg;

    spice_marshaller_add_uint32(m, src->num_tokens);
}

static void spice_marshall_msgc_main_agent_token(SPICE_GNUC_UNUSED SpiceMarshaller *m, SPICE_GNUC_UNUSED SpiceMsgcMainAgentTokens *msg)
{
    SPICE_GNUC_UNUSED SpiceMarshaller *m2;
    SpiceMsgcMainAgentTokens *src;
    src = (SpiceMsgcMainAgentTokens *)msg;

    spice_marshaller_add_uint32(m, src->num_tokens);
}

static void spice_marshall_msgc_main_migrate_dst_do_seamless(SPICE_GNUC_UNUSED SpiceMarshaller *m, SPICE_GNUC_UNUSED SpiceMsgcMainMigrateDstDoSeamless *msg)
{
    SPICE_GNUC_UNUSED SpiceMarshaller *m2;
    SpiceMsgcMainMigrateDstDoSeamless *src;
    src = (SpiceMsgcMainMigrateDstDoSeamless *)msg;

    spice_marshaller_add_uint32(m, src->src_version);
}

static void spice_marshall_msgc_display_init(SPICE_GNUC_UNUSED SpiceMarshaller *m, SPICE_GNUC_UNUSED SpiceMsgcDisplayInit *msg)
{
    SPICE_GNUC_UNUSED SpiceMarshaller *m2;
    SpiceMsgcDisplayInit *src;
    src = (SpiceMsgcDisplayInit *)msg;

    spice_marshaller_add_uint8(m, src->pixmap_cache_id);
    spice_marshaller_add_int64(m, src->pixmap_cache_size);
    spice_marshaller_add_uint8(m, src->glz_dictionary_id);
    spice_marshaller_add_int32(m, src->glz_dictionary_window_size);
}

static void spice_marshall_msgc_display_stream_report(SPICE_GNUC_UNUSED SpiceMarshaller *m, SPICE_GNUC_UNUSED SpiceMsgcDisplayStreamReport *msg)
{
    SPICE_GNUC_UNUSED SpiceMarshaller *m2;
    SpiceMsgcDisplayStreamReport *src;
    src = (SpiceMsgcDisplayStreamReport *)msg;

    spice_marshaller_add_uint32(m, src->stream_id);
    spice_marshaller_add_uint32(m, src->unique_id);
    spice_marshaller_add_uint32(m, src->start_frame_mm_time);
    spice_marshaller_add_uint32(m, src->end_frame_mm_time);
    spice_marshaller_add_uint32(m, src->num_frames);
    spice_marshaller_add_uint32(m, src->num_drops);
    spice_marshaller_add_int32(m, src->last_frame_delay);
    spice_marshaller_add_uint32(m, src->audio_delay);
}

static void spice_marshall_msgc_inputs_key_down(SPICE_GNUC_UNUSED SpiceMarshaller *m, SPICE_GNUC_UNUSED SpiceMsgcKeyDown *msg)
{
    SPICE_GNUC_UNUSED SpiceMarshaller *m2;
    SpiceMsgcKeyDown *src;
    src = (SpiceMsgcKeyDown *)msg;

    spice_marshaller_add_uint32(m, src->code);
}

static void spice_marshall_msgc_inputs_key_up(SPICE_GNUC_UNUSED SpiceMarshaller *m, SPICE_GNUC_UNUSED SpiceMsgcKeyUp *msg)
{
    SPICE_GNUC_UNUSED SpiceMarshaller *m2;
    SpiceMsgcKeyUp *src;
    src = (SpiceMsgcKeyUp *)msg;

    spice_marshaller_add_uint32(m, src->code);
}

static void spice_marshall_msgc_inputs_key_modifiers(SPICE_GNUC_UNUSED SpiceMarshaller *m, SPICE_GNUC_UNUSED SpiceMsgcKeyModifiers *msg)
{
    SPICE_GNUC_UNUSED SpiceMarshaller *m2;
    SpiceMsgcKeyModifiers *src;
    src = (SpiceMsgcKeyModifiers *)msg;

    spice_marshaller_add_uint16(m, src->modifiers);
}

static void spice_marshall_msgc_inputs_mouse_motion(SPICE_GNUC_UNUSED SpiceMarshaller *m, SPICE_GNUC_UNUSED SpiceMsgcMouseMotion *msg)
{
    SPICE_GNUC_UNUSED SpiceMarshaller *m2;
    SpiceMsgcMouseMotion *src;
    src = (SpiceMsgcMouseMotion *)msg;

    spice_marshaller_add_int32(m, src->dx);
    spice_marshaller_add_int32(m, src->dy);
    spice_marshaller_add_uint16(m, src->buttons_state);
}

static void spice_marshall_msgc_inputs_mouse_position(SPICE_GNUC_UNUSED SpiceMarshaller *m, SPICE_GNUC_UNUSED SpiceMsgcMousePosition *msg)
{
    SPICE_GNUC_UNUSED SpiceMarshaller *m2;
    SpiceMsgcMousePosition *src;
    src = (SpiceMsgcMousePosition *)msg;

    spice_marshaller_add_uint32(m, src->x);
    spice_marshaller_add_uint32(m, src->y);
    spice_marshaller_add_uint16(m, src->buttons_state);
    spice_marshaller_add_uint8(m, src->display_id);
}

static void spice_marshall_msgc_inputs_mouse_press(SPICE_GNUC_UNUSED SpiceMarshaller *m, SPICE_GNUC_UNUSED SpiceMsgcMousePress *msg)
{
    SPICE_GNUC_UNUSED SpiceMarshaller *m2;
    SpiceMsgcMousePress *src;
    src = (SpiceMsgcMousePress *)msg;

    spice_marshaller_add_uint8(m, src->button);
    spice_marshaller_add_uint16(m, src->buttons_state);
}

static void spice_marshall_msgc_inputs_mouse_release(SPICE_GNUC_UNUSED SpiceMarshaller *m, SPICE_GNUC_UNUSED SpiceMsgcMouseRelease *msg)
{
    SPICE_GNUC_UNUSED SpiceMarshaller *m2;
    SpiceMsgcMouseRelease *src;
    src = (SpiceMsgcMouseRelease *)msg;

    spice_marshaller_add_uint8(m, src->button);
    spice_marshaller_add_uint16(m, src->buttons_state);
}

static void spice_marshall_msgc_record_data(SPICE_GNUC_UNUSED SpiceMarshaller *m, SPICE_GNUC_UNUSED SpiceMsgcRecordPacket *msg)
{
    SPICE_GNUC_UNUSED SpiceMarshaller *m2;
    SpiceMsgcRecordPacket *src;
    src = (SpiceMsgcRecordPacket *)msg;

    spice_marshaller_add_uint32(m, src->time);
    /* Don't marshall @nomarshal data */
}

static void spice_marshall_msgc_record_mode(SPICE_GNUC_UNUSED SpiceMarshaller *m, SPICE_GNUC_UNUSED SpiceMsgcRecordMode *msg)
{
    SPICE_GNUC_UNUSED SpiceMarshaller *m2;
    SpiceMsgcRecordMode *src;
    src = (SpiceMsgcRecordMode *)msg;

    spice_marshaller_add_uint32(m, src->time);
    spice_marshaller_add_uint16(m, src->mode);
    /* Remaining data must be appended manually */
}

static void spice_marshall_msgc_record_start_mark(SPICE_GNUC_UNUSED SpiceMarshaller *m, SPICE_GNUC_UNUSED SpiceMsgcRecordStartMark *msg)
{
    SPICE_GNUC_UNUSED SpiceMarshaller *m2;
    SpiceMsgcRecordStartMark *src;
    src = (SpiceMsgcRecordStartMark *)msg;

    spice_marshaller_add_uint32(m, src->time);
}

SPICE_GNUC_UNUSED static void spice_marshall_array_uint8(SpiceMarshaller *m, uint8_t *ptr, unsigned count)
{
    SPICE_GNUC_UNUSED SpiceMarshaller *m2;
    uint32_t i;

    for (i = 0; i < count; i++) {
        spice_marshaller_add_uint8(m, *ptr++);
    }
}

static void spice_marshall_msgc_tunnel_service_add(SPICE_GNUC_UNUSED SpiceMarshaller *m, SPICE_GNUC_UNUSED SpiceMsgcTunnelAddGenericService *msg, SpiceMarshaller **name_out, SpiceMarshaller **description_out)
{
    SPICE_GNUC_UNUSED SpiceMarshaller *m2;
    SpiceMsgcTunnelAddGenericService *src;
    uint32_t i;
    *name_out = NULL;
    *description_out = NULL;
    src = (SpiceMsgcTunnelAddGenericService *)msg;

    spice_marshaller_add_uint16(m, src->type);
    spice_marshaller_add_uint32(m, src->id);
    spice_marshaller_add_uint32(m, src->group);
    spice_marshaller_add_uint32(m, src->port);
    *name_out = spice_marshaller_get_ptr_submarshaller(m, 0);
    *description_out = spice_marshaller_get_ptr_submarshaller(m, 0);
    if (src->type == SPICE_TUNNEL_SERVICE_TYPE_IPP) {
        uint8_t *ipv4__element;
        spice_marshaller_add_uint16(m, src->u.ip.type);
        if (src->u.ip.type == SPICE_TUNNEL_IP_TYPE_IPv4) {
            ipv4__element = src->u.ip.u.ipv4;
            for (i = 0; i < 4; i++) {
                spice_marshaller_add_uint8(m, *ipv4__element);
                ipv4__element++;
            }
        }
    }
}

static void spice_marshall_msgc_tunnel_service_remove(SPICE_GNUC_UNUSED SpiceMarshaller *m, SPICE_GNUC_UNUSED SpiceMsgcTunnelRemoveService *msg)
{
    SPICE_GNUC_UNUSED SpiceMarshaller *m2;
    SpiceMsgcTunnelRemoveService *src;
    src = (SpiceMsgcTunnelRemoveService *)msg;

    spice_marshaller_add_uint32(m, src->id);
}

static void spice_marshall_msgc_tunnel_socket_open_ack(SPICE_GNUC_UNUSED SpiceMarshaller *m, SPICE_GNUC_UNUSED SpiceMsgcTunnelSocketOpenAck *msg)
{
    SPICE_GNUC_UNUSED SpiceMarshaller *m2;
    SpiceMsgcTunnelSocketOpenAck *src;
    src = (SpiceMsgcTunnelSocketOpenAck *)msg;

    spice_marshaller_add_uint16(m, src->connection_id);
    spice_marshaller_add_uint32(m, src->tokens);
}

static void spice_marshall_msgc_tunnel_socket_open_nack(SPICE_GNUC_UNUSED SpiceMarshaller *m, SPICE_GNUC_UNUSED SpiceMsgcTunnelSocketOpenNack *msg)
{
    SPICE_GNUC_UNUSED SpiceMarshaller *m2;
    SpiceMsgcTunnelSocketOpenNack *src;
    src = (SpiceMsgcTunnelSocketOpenNack *)msg;

    spice_marshaller_add_uint16(m, src->connection_id);
}

static void spice_marshall_msgc_tunnel_socket_fin(SPICE_GNUC_UNUSED SpiceMarshaller *m, SPICE_GNUC_UNUSED SpiceMsgcTunnelSocketFin *msg)
{
    SPICE_GNUC_UNUSED SpiceMarshaller *m2;
    SpiceMsgcTunnelSocketFin *src;
    src = (SpiceMsgcTunnelSocketFin *)msg;

    spice_marshaller_add_uint16(m, src->connection_id);
}

static void spice_marshall_msgc_tunnel_socket_closed(SPICE_GNUC_UNUSED SpiceMarshaller *m, SPICE_GNUC_UNUSED SpiceMsgcTunnelSocketClosed *msg)
{
    SPICE_GNUC_UNUSED SpiceMarshaller *m2;
    SpiceMsgcTunnelSocketClosed *src;
    src = (SpiceMsgcTunnelSocketClosed *)msg;

    spice_marshaller_add_uint16(m, src->connection_id);
}

static void spice_marshall_msgc_tunnel_socket_closed_ack(SPICE_GNUC_UNUSED SpiceMarshaller *m, SPICE_GNUC_UNUSED SpiceMsgcTunnelSocketClosedAck *msg)
{
    SPICE_GNUC_UNUSED SpiceMarshaller *m2;
    SpiceMsgcTunnelSocketClosedAck *src;
    src = (SpiceMsgcTunnelSocketClosedAck *)msg;

    spice_marshaller_add_uint16(m, src->connection_id);
}

static void spice_marshall_msgc_tunnel_socket_data(SPICE_GNUC_UNUSED SpiceMarshaller *m, SPICE_GNUC_UNUSED SpiceMsgcTunnelSocketData *msg)
{
    SPICE_GNUC_UNUSED SpiceMarshaller *m2;
    SpiceMsgcTunnelSocketData *src;
    src = (SpiceMsgcTunnelSocketData *)msg;

    spice_marshaller_add_uint16(m, src->connection_id);
    /* Remaining data must be appended manually */
}

static void spice_marshall_msgc_tunnel_socket_token(SPICE_GNUC_UNUSED SpiceMarshaller *m, SPICE_GNUC_UNUSED SpiceMsgcTunnelSocketTokens *msg)
{
    SPICE_GNUC_UNUSED SpiceMarshaller *m2;
    SpiceMsgcTunnelSocketTokens *src;
    src = (SpiceMsgcTunnelSocketTokens *)msg;

    spice_marshaller_add_uint16(m, src->connection_id);
    spice_marshaller_add_uint32(m, src->num_tokens);
}

#ifdef USE_SMARTCARD
static void spice_marshall_msgc_smartcard_data(SPICE_GNUC_UNUSED SpiceMarshaller *m, SPICE_GNUC_UNUSED SpiceMsgcSmartcard *msg, SpiceMarshaller **reader_name_out)
{
    SPICE_GNUC_UNUSED SpiceMarshaller *m2;
    SpiceMsgcSmartcard *src;
    *reader_name_out = NULL;
    src = (SpiceMsgcSmartcard *)msg;

    /* header */ {
        spice_marshaller_add_uint32(m, src->header.type);
        spice_marshaller_add_uint32(m, src->header.reader_id);
        spice_marshaller_add_uint32(m, src->header.length);
    }
    if (src->header.type == SPICE_VSC_MESSAGE_TYPE_ReaderAdd) {
        /* Don't marshall @nomarshal reader_name */
    } else if (src->header.type == SPICE_VSC_MESSAGE_TYPE_ATR || src->header.type == SPICE_VSC_MESSAGE_TYPE_APDU) {
        /* Remaining data must be appended manually */
    } else if (src->header.type == SPICE_VSC_MESSAGE_TYPE_Error) {
        spice_marshaller_add_uint32(m, src->error.code);
    }
}

static void spice_marshall_msgc_smartcard_header(SPICE_GNUC_UNUSED SpiceMarshaller *m, SPICE_GNUC_UNUSED VSCMsgHeader *msg)
{
    SPICE_GNUC_UNUSED SpiceMarshaller *m2;
    VSCMsgHeader *src;
    src = (VSCMsgHeader *)msg;

    spice_marshaller_add_uint32(m, src->type);
    spice_marshaller_add_uint32(m, src->reader_id);
    spice_marshaller_add_uint32(m, src->length);
}

static void spice_marshall_msgc_smartcard_error(SPICE_GNUC_UNUSED SpiceMarshaller *m, SPICE_GNUC_UNUSED VSCMsgError *msg)
{
    SPICE_GNUC_UNUSED SpiceMarshaller *m2;
    VSCMsgError *src;
    src = (VSCMsgError *)msg;

    spice_marshaller_add_uint32(m, src->code);
}

static void spice_marshall_msgc_smartcard_atr(SPICE_GNUC_UNUSED SpiceMarshaller *m, SPICE_GNUC_UNUSED VSCMsgATR *msg)
{
    SPICE_GNUC_UNUSED SpiceMarshaller *m2;
}

static void spice_marshall_msgc_smartcard_reader_add(SPICE_GNUC_UNUSED SpiceMarshaller *m, SPICE_GNUC_UNUSED VSCMsgReaderAdd *msg)
{
    SPICE_GNUC_UNUSED SpiceMarshaller *m2;
}

#endif /* USE_SMARTCARD */
static void spice_marshall_msgc_port_event(SPICE_GNUC_UNUSED SpiceMarshaller *m, SPICE_GNUC_UNUSED SpiceMsgcPortEvent *msg)
{
    SPICE_GNUC_UNUSED SpiceMarshaller *m2;
    SpiceMsgcPortEvent *src;
    src = (SpiceMsgcPortEvent *)msg;

    spice_marshaller_add_uint8(m, src->event);
}

SpiceMessageMarshallers * spice_message_marshallers_get(void)
{
    static SpiceMessageMarshallers marshallers = {NULL};

    marshallers.msg_SpiceMsgData = spice_marshall_SpiceMsgData;
    marshallers.msg_SpiceMsgEmpty = spice_marshall_SpiceMsgEmpty;
    marshallers.msgc_ack_sync = spice_marshall_msgc_ack_sync;
    marshallers.msgc_disconnecting = spice_marshall_msgc_disconnecting;
    marshallers.msgc_display_init = spice_marshall_msgc_display_init;
    marshallers.msgc_display_stream_report = spice_marshall_msgc_display_stream_report;
    marshallers.msgc_inputs_key_down = spice_marshall_msgc_inputs_key_down;
    marshallers.msgc_inputs_key_modifiers = spice_marshall_msgc_inputs_key_modifiers;
    marshallers.msgc_inputs_key_up = spice_marshall_msgc_inputs_key_up;
    marshallers.msgc_inputs_mouse_motion = spice_marshall_msgc_inputs_mouse_motion;
    marshallers.msgc_inputs_mouse_position = spice_marshall_msgc_inputs_mouse_position;
    marshallers.msgc_inputs_mouse_press = spice_marshall_msgc_inputs_mouse_press;
    marshallers.msgc_inputs_mouse_release = spice_marshall_msgc_inputs_mouse_release;
    marshallers.msgc_main_agent_start = spice_marshall_msgc_main_agent_start;
    marshallers.msgc_main_agent_token = spice_marshall_msgc_main_agent_token;
    marshallers.msgc_main_client_info = spice_marshall_msgc_main_client_info;
    marshallers.msgc_main_migrate_dst_do_seamless = spice_marshall_msgc_main_migrate_dst_do_seamless;
    marshallers.msgc_main_mouse_mode_request = spice_marshall_msgc_main_mouse_mode_request;
    marshallers.msgc_pong = spice_marshall_msgc_pong;
    marshallers.msgc_port_event = spice_marshall_msgc_port_event;
    marshallers.msgc_record_data = spice_marshall_msgc_record_data;
    marshallers.msgc_record_mode = spice_marshall_msgc_record_mode;
    marshallers.msgc_record_start_mark = spice_marshall_msgc_record_start_mark;
#ifdef USE_SMARTCARD
    marshallers.msgc_smartcard_atr = spice_marshall_msgc_smartcard_atr;
#endif /* USE_SMARTCARD */
#ifdef USE_SMARTCARD
    marshallers.msgc_smartcard_data = spice_marshall_msgc_smartcard_data;
#endif /* USE_SMARTCARD */
#ifdef USE_SMARTCARD
    marshallers.msgc_smartcard_error = spice_marshall_msgc_smartcard_error;
#endif /* USE_SMARTCARD */
#ifdef USE_SMARTCARD
    marshallers.msgc_smartcard_header = spice_marshall_msgc_smartcard_header;
#endif /* USE_SMARTCARD */
#ifdef USE_SMARTCARD
    marshallers.msgc_smartcard_reader_add = spice_marshall_msgc_smartcard_reader_add;
#endif /* USE_SMARTCARD */
    marshallers.msgc_tunnel_service_add = spice_marshall_msgc_tunnel_service_add;
    marshallers.msgc_tunnel_service_remove = spice_marshall_msgc_tunnel_service_remove;
    marshallers.msgc_tunnel_socket_closed = spice_marshall_msgc_tunnel_socket_closed;
    marshallers.msgc_tunnel_socket_closed_ack = spice_marshall_msgc_tunnel_socket_closed_ack;
    marshallers.msgc_tunnel_socket_data = spice_marshall_msgc_tunnel_socket_data;
    marshallers.msgc_tunnel_socket_fin = spice_marshall_msgc_tunnel_socket_fin;
    marshallers.msgc_tunnel_socket_open_ack = spice_marshall_msgc_tunnel_socket_open_ack;
    marshallers.msgc_tunnel_socket_open_nack = spice_marshall_msgc_tunnel_socket_open_nack;
    marshallers.msgc_tunnel_socket_token = spice_marshall_msgc_tunnel_socket_token;

    return &marshallers;
}

