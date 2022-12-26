/**
 * Autogenerated by Thrift Compiler (0.17.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef QUERY_SVC_H
#define QUERY_SVC_H

#include <thrift/c_glib/processor/thrift_dispatch_processor.h>

#include "query_types.h"

/* querySvc service interface */
typedef struct _querySvcIf querySvcIf;  /* dummy object */

struct _querySvcIfInterface
{
  GTypeInterface parent;

  gboolean (*execute) (querySvcIf *iface, QueryResult ** _return, const Query * query, GError **error);
};
typedef struct _querySvcIfInterface querySvcIfInterface;

GType query_svc_if_get_type (void);
#define TYPE_QUERY_SVC_IF (query_svc_if_get_type())
#define QUERY_SVC_IF(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_QUERY_SVC_IF, querySvcIf))
#define IS_QUERY_SVC_IF(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_QUERY_SVC_IF))
#define QUERY_SVC_IF_GET_INTERFACE(inst) (G_TYPE_INSTANCE_GET_INTERFACE ((inst), TYPE_QUERY_SVC_IF, querySvcIfInterface))

gboolean query_svc_if_execute (querySvcIf *iface, QueryResult ** _return, const Query * query, GError **error);

/* querySvc service client */
struct _querySvcClient
{
  GObject parent;

  ThriftProtocol *input_protocol;
  ThriftProtocol *output_protocol;
};
typedef struct _querySvcClient querySvcClient;

struct _querySvcClientClass
{
  GObjectClass parent;
};
typedef struct _querySvcClientClass querySvcClientClass;

GType query_svc_client_get_type (void);
#define TYPE_QUERY_SVC_CLIENT (query_svc_client_get_type())
#define QUERY_SVC_CLIENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_QUERY_SVC_CLIENT, querySvcClient))
#define QUERY_SVC_CLIENT_CLASS(c) (G_TYPE_CHECK_CLASS_CAST ((c), TYPE_QUERY_SVC_CLIENT, querySvcClientClass))
#define QUERY_SVC_IS_CLIENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_QUERY_SVC_CLIENT))
#define QUERY_SVC_IS_CLIENT_CLASS(c) (G_TYPE_CHECK_CLASS_TYPE ((c), TYPE_QUERY_SVC_CLIENT))
#define QUERY_SVC_CLIENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_QUERY_SVC_CLIENT, querySvcClientClass))

gboolean query_svc_client_execute (querySvcIf * iface, QueryResult ** _return, const Query * query, GError ** error);
gboolean query_svc_client_send_execute (querySvcIf * iface, const Query * query, GError ** error);
gboolean query_svc_client_recv_execute (querySvcIf * iface, QueryResult ** _return, GError ** error);
void query_svc_client_set_property (GObject *object, guint property_id, const GValue *value, GParamSpec *pspec);
void query_svc_client_get_property (GObject *object, guint property_id, GValue *value, GParamSpec *pspec);

/* querySvc handler (abstract base class) */
struct _querySvcHandler
{
  GObject parent;
};
typedef struct _querySvcHandler querySvcHandler;

struct _querySvcHandlerClass
{
  GObjectClass parent;

  gboolean (*execute) (querySvcIf *iface, QueryResult ** _return, const Query * query, GError **error);
};
typedef struct _querySvcHandlerClass querySvcHandlerClass;

GType query_svc_handler_get_type (void);
#define TYPE_QUERY_SVC_HANDLER (query_svc_handler_get_type())
#define QUERY_SVC_HANDLER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_QUERY_SVC_HANDLER, querySvcHandler))
#define IS_QUERY_SVC_HANDLER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_QUERY_SVC_HANDLER))
#define QUERY_SVC_HANDLER_CLASS(c) (G_TYPE_CHECK_CLASS_CAST ((c), TYPE_QUERY_SVC_HANDLER, querySvcHandlerClass))
#define IS_QUERY_SVC_HANDLER_CLASS(c) (G_TYPE_CHECK_CLASS_TYPE ((c), TYPE_QUERY_SVC_HANDLER))
#define QUERY_SVC_HANDLER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_QUERY_SVC_HANDLER, querySvcHandlerClass))

gboolean query_svc_handler_execute (querySvcIf *iface, QueryResult ** _return, const Query * query, GError **error);

/* querySvc processor */
struct _querySvcProcessor
{
  ThriftDispatchProcessor parent;

  /* protected */
  querySvcHandler *handler;
  GHashTable *process_map;
};
typedef struct _querySvcProcessor querySvcProcessor;

struct _querySvcProcessorClass
{
  ThriftDispatchProcessorClass parent;

  /* protected */
  gboolean (*dispatch_call) (ThriftDispatchProcessor *processor,
                             ThriftProtocol *in,
                             ThriftProtocol *out,
                             gchar *fname,
                             gint32 seqid,
                             GError **error);
};
typedef struct _querySvcProcessorClass querySvcProcessorClass;

GType query_svc_processor_get_type (void);
#define TYPE_QUERY_SVC_PROCESSOR (query_svc_processor_get_type())
#define QUERY_SVC_PROCESSOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_QUERY_SVC_PROCESSOR, querySvcProcessor))
#define IS_QUERY_SVC_PROCESSOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_QUERY_SVC_PROCESSOR))
#define QUERY_SVC_PROCESSOR_CLASS(c) (G_TYPE_CHECK_CLASS_CAST ((c), TYPE_QUERY_SVC_PROCESSOR, querySvcProcessorClass))
#define IS_QUERY_SVC_PROCESSOR_CLASS(c) (G_TYPE_CHECK_CLASS_TYPE ((c), TYPE_QUERY_SVC_PROCESSOR))
#define QUERY_SVC_PROCESSOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_QUERY_SVC_PROCESSOR, querySvcProcessorClass))

#endif /* QUERY_SVC_H */
