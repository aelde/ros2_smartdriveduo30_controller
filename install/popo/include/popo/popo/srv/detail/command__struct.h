// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from popo:srv/Command.idl
// generated code does not contain a copyright notice

#ifndef POPO__SRV__DETAIL__COMMAND__STRUCT_H_
#define POPO__SRV__DETAIL__COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'cmd'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Command in the package popo.
typedef struct popo__srv__Command_Request
{
  rosidl_runtime_c__String cmd;
} popo__srv__Command_Request;

// Struct for a sequence of popo__srv__Command_Request.
typedef struct popo__srv__Command_Request__Sequence
{
  popo__srv__Command_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} popo__srv__Command_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'feedback'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Command in the package popo.
typedef struct popo__srv__Command_Response
{
  rosidl_runtime_c__String feedback;
} popo__srv__Command_Response;

// Struct for a sequence of popo__srv__Command_Response.
typedef struct popo__srv__Command_Response__Sequence
{
  popo__srv__Command_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} popo__srv__Command_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // POPO__SRV__DETAIL__COMMAND__STRUCT_H_
