// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from popo:srv/TestThree.idl
// generated code does not contain a copyright notice
#include "popo/srv/detail/test_three__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "popo/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "popo/srv/detail/test_three__struct.h"
#include "popo/srv/detail/test_three__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _TestThree_Request__ros_msg_type = popo__srv__TestThree_Request;

static bool _TestThree_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TestThree_Request__ros_msg_type * ros_message = static_cast<const _TestThree_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: a
  {
    cdr << ros_message->a;
  }

  // Field name: b
  {
    cdr << ros_message->b;
  }

  // Field name: c
  {
    cdr << ros_message->c;
  }

  return true;
}

static bool _TestThree_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TestThree_Request__ros_msg_type * ros_message = static_cast<_TestThree_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: a
  {
    cdr >> ros_message->a;
  }

  // Field name: b
  {
    cdr >> ros_message->b;
  }

  // Field name: c
  {
    cdr >> ros_message->c;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_popo
size_t get_serialized_size_popo__srv__TestThree_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TestThree_Request__ros_msg_type * ros_message = static_cast<const _TestThree_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name a
  {
    size_t item_size = sizeof(ros_message->a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name b
  {
    size_t item_size = sizeof(ros_message->b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name c
  {
    size_t item_size = sizeof(ros_message->c);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TestThree_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_popo__srv__TestThree_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_popo
size_t max_serialized_size_popo__srv__TestThree_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: a
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: b
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: c
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _TestThree_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_popo__srv__TestThree_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TestThree_Request = {
  "popo::srv",
  "TestThree_Request",
  _TestThree_Request__cdr_serialize,
  _TestThree_Request__cdr_deserialize,
  _TestThree_Request__get_serialized_size,
  _TestThree_Request__max_serialized_size
};

static rosidl_message_type_support_t _TestThree_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TestThree_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, popo, srv, TestThree_Request)() {
  return &_TestThree_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "popo/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "popo/srv/detail/test_three__struct.h"
// already included above
// #include "popo/srv/detail/test_three__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _TestThree_Response__ros_msg_type = popo__srv__TestThree_Response;

static bool _TestThree_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TestThree_Response__ros_msg_type * ros_message = static_cast<const _TestThree_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: sum
  {
    cdr << ros_message->sum;
  }

  return true;
}

static bool _TestThree_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TestThree_Response__ros_msg_type * ros_message = static_cast<_TestThree_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: sum
  {
    cdr >> ros_message->sum;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_popo
size_t get_serialized_size_popo__srv__TestThree_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TestThree_Response__ros_msg_type * ros_message = static_cast<const _TestThree_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name sum
  {
    size_t item_size = sizeof(ros_message->sum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TestThree_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_popo__srv__TestThree_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_popo
size_t max_serialized_size_popo__srv__TestThree_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: sum
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _TestThree_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_popo__srv__TestThree_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TestThree_Response = {
  "popo::srv",
  "TestThree_Response",
  _TestThree_Response__cdr_serialize,
  _TestThree_Response__cdr_deserialize,
  _TestThree_Response__get_serialized_size,
  _TestThree_Response__max_serialized_size
};

static rosidl_message_type_support_t _TestThree_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TestThree_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, popo, srv, TestThree_Response)() {
  return &_TestThree_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "popo/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "popo/srv/test_three.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t TestThree__callbacks = {
  "popo::srv",
  "TestThree",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, popo, srv, TestThree_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, popo, srv, TestThree_Response)(),
};

static rosidl_service_type_support_t TestThree__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &TestThree__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, popo, srv, TestThree)() {
  return &TestThree__handle;
}

#if defined(__cplusplus)
}
#endif
