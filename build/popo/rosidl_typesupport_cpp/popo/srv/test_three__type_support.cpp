// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from popo:srv/TestThree.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "popo/srv/detail/test_three__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace popo
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _TestThree_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TestThree_Request_type_support_ids_t;

static const _TestThree_Request_type_support_ids_t _TestThree_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, popo, srv, TestThree_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, popo, srv, TestThree_Request)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TestThree_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace popo

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<popo::srv::TestThree_Request>()
{
  return &::popo::srv::rosidl_typesupport_cpp::TestThree_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, popo, srv, TestThree_Request)() {
  return get_message_type_support_handle<popo::srv::TestThree_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "popo/srv/detail/test_three__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace popo
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _TestThree_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TestThree_Response_type_support_ids_t;

static const _TestThree_Response_type_support_ids_t _TestThree_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, popo, srv, TestThree_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, popo, srv, TestThree_Response)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TestThree_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace popo

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<popo::srv::TestThree_Response>()
{
  return &::popo::srv::rosidl_typesupport_cpp::TestThree_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, popo, srv, TestThree_Response)() {
  return get_message_type_support_handle<popo::srv::TestThree_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "popo/srv/detail/test_three__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace popo
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _TestThree_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TestThree_type_support_ids_t;

static const _TestThree_type_support_ids_t _TestThree_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, popo, srv, TestThree)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, popo, srv, TestThree)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TestThree_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace popo

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<popo::srv::TestThree>()
{
  return &::popo::srv::rosidl_typesupport_cpp::TestThree_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
