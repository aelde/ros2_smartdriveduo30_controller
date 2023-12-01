// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from popo:srv/AddThreeInts.idl
// generated code does not contain a copyright notice

#ifndef POPO__SRV__DETAIL__ADD_THREE_INTS__STRUCT_H_
#define POPO__SRV__DETAIL__ADD_THREE_INTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/AddThreeInts in the package popo.
typedef struct popo__srv__AddThreeInts_Request
{
  int64_t a;
  int64_t b;
  int64_t c;
} popo__srv__AddThreeInts_Request;

// Struct for a sequence of popo__srv__AddThreeInts_Request.
typedef struct popo__srv__AddThreeInts_Request__Sequence
{
  popo__srv__AddThreeInts_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} popo__srv__AddThreeInts_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/AddThreeInts in the package popo.
typedef struct popo__srv__AddThreeInts_Response
{
  int64_t sum;
} popo__srv__AddThreeInts_Response;

// Struct for a sequence of popo__srv__AddThreeInts_Response.
typedef struct popo__srv__AddThreeInts_Response__Sequence
{
  popo__srv__AddThreeInts_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} popo__srv__AddThreeInts_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // POPO__SRV__DETAIL__ADD_THREE_INTS__STRUCT_H_
