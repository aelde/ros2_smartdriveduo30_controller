// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from popo:srv/TestThree.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "popo/srv/detail/test_three__struct.h"
#include "popo/srv/detail/test_three__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace popo
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _TestThree_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TestThree_Request_type_support_ids_t;

static const _TestThree_Request_type_support_ids_t _TestThree_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TestThree_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TestThree_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TestThree_Request_type_support_symbol_names_t _TestThree_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, popo, srv, TestThree_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, popo, srv, TestThree_Request)),
  }
};

typedef struct _TestThree_Request_type_support_data_t
{
  void * data[2];
} _TestThree_Request_type_support_data_t;

static _TestThree_Request_type_support_data_t _TestThree_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TestThree_Request_message_typesupport_map = {
  2,
  "popo",
  &_TestThree_Request_message_typesupport_ids.typesupport_identifier[0],
  &_TestThree_Request_message_typesupport_symbol_names.symbol_name[0],
  &_TestThree_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TestThree_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TestThree_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace popo

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, popo, srv, TestThree_Request)() {
  return &::popo::srv::rosidl_typesupport_c::TestThree_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "popo/srv/detail/test_three__struct.h"
// already included above
// #include "popo/srv/detail/test_three__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace popo
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _TestThree_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TestThree_Response_type_support_ids_t;

static const _TestThree_Response_type_support_ids_t _TestThree_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TestThree_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TestThree_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TestThree_Response_type_support_symbol_names_t _TestThree_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, popo, srv, TestThree_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, popo, srv, TestThree_Response)),
  }
};

typedef struct _TestThree_Response_type_support_data_t
{
  void * data[2];
} _TestThree_Response_type_support_data_t;

static _TestThree_Response_type_support_data_t _TestThree_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TestThree_Response_message_typesupport_map = {
  2,
  "popo",
  &_TestThree_Response_message_typesupport_ids.typesupport_identifier[0],
  &_TestThree_Response_message_typesupport_symbol_names.symbol_name[0],
  &_TestThree_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TestThree_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TestThree_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace popo

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, popo, srv, TestThree_Response)() {
  return &::popo::srv::rosidl_typesupport_c::TestThree_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "popo/srv/detail/test_three__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace popo
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _TestThree_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TestThree_type_support_ids_t;

static const _TestThree_type_support_ids_t _TestThree_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TestThree_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TestThree_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TestThree_type_support_symbol_names_t _TestThree_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, popo, srv, TestThree)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, popo, srv, TestThree)),
  }
};

typedef struct _TestThree_type_support_data_t
{
  void * data[2];
} _TestThree_type_support_data_t;

static _TestThree_type_support_data_t _TestThree_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TestThree_service_typesupport_map = {
  2,
  "popo",
  &_TestThree_service_typesupport_ids.typesupport_identifier[0],
  &_TestThree_service_typesupport_symbol_names.symbol_name[0],
  &_TestThree_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t TestThree_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TestThree_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace popo

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, popo, srv, TestThree)() {
  return &::popo::srv::rosidl_typesupport_c::TestThree_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
