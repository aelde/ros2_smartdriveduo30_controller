// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from popo:srv/Command.idl
// generated code does not contain a copyright notice

#ifndef POPO__SRV__DETAIL__COMMAND__FUNCTIONS_H_
#define POPO__SRV__DETAIL__COMMAND__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "popo/msg/rosidl_generator_c__visibility_control.h"

#include "popo/srv/detail/command__struct.h"

/// Initialize srv/Command message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * popo__srv__Command_Request
 * )) before or use
 * popo__srv__Command_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_popo
bool
popo__srv__Command_Request__init(popo__srv__Command_Request * msg);

/// Finalize srv/Command message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_popo
void
popo__srv__Command_Request__fini(popo__srv__Command_Request * msg);

/// Create srv/Command message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * popo__srv__Command_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_popo
popo__srv__Command_Request *
popo__srv__Command_Request__create();

/// Destroy srv/Command message.
/**
 * It calls
 * popo__srv__Command_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_popo
void
popo__srv__Command_Request__destroy(popo__srv__Command_Request * msg);

/// Check for srv/Command message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_popo
bool
popo__srv__Command_Request__are_equal(const popo__srv__Command_Request * lhs, const popo__srv__Command_Request * rhs);

/// Copy a srv/Command message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_popo
bool
popo__srv__Command_Request__copy(
  const popo__srv__Command_Request * input,
  popo__srv__Command_Request * output);

/// Initialize array of srv/Command messages.
/**
 * It allocates the memory for the number of elements and calls
 * popo__srv__Command_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_popo
bool
popo__srv__Command_Request__Sequence__init(popo__srv__Command_Request__Sequence * array, size_t size);

/// Finalize array of srv/Command messages.
/**
 * It calls
 * popo__srv__Command_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_popo
void
popo__srv__Command_Request__Sequence__fini(popo__srv__Command_Request__Sequence * array);

/// Create array of srv/Command messages.
/**
 * It allocates the memory for the array and calls
 * popo__srv__Command_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_popo
popo__srv__Command_Request__Sequence *
popo__srv__Command_Request__Sequence__create(size_t size);

/// Destroy array of srv/Command messages.
/**
 * It calls
 * popo__srv__Command_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_popo
void
popo__srv__Command_Request__Sequence__destroy(popo__srv__Command_Request__Sequence * array);

/// Check for srv/Command message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_popo
bool
popo__srv__Command_Request__Sequence__are_equal(const popo__srv__Command_Request__Sequence * lhs, const popo__srv__Command_Request__Sequence * rhs);

/// Copy an array of srv/Command messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_popo
bool
popo__srv__Command_Request__Sequence__copy(
  const popo__srv__Command_Request__Sequence * input,
  popo__srv__Command_Request__Sequence * output);

/// Initialize srv/Command message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * popo__srv__Command_Response
 * )) before or use
 * popo__srv__Command_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_popo
bool
popo__srv__Command_Response__init(popo__srv__Command_Response * msg);

/// Finalize srv/Command message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_popo
void
popo__srv__Command_Response__fini(popo__srv__Command_Response * msg);

/// Create srv/Command message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * popo__srv__Command_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_popo
popo__srv__Command_Response *
popo__srv__Command_Response__create();

/// Destroy srv/Command message.
/**
 * It calls
 * popo__srv__Command_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_popo
void
popo__srv__Command_Response__destroy(popo__srv__Command_Response * msg);

/// Check for srv/Command message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_popo
bool
popo__srv__Command_Response__are_equal(const popo__srv__Command_Response * lhs, const popo__srv__Command_Response * rhs);

/// Copy a srv/Command message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_popo
bool
popo__srv__Command_Response__copy(
  const popo__srv__Command_Response * input,
  popo__srv__Command_Response * output);

/// Initialize array of srv/Command messages.
/**
 * It allocates the memory for the number of elements and calls
 * popo__srv__Command_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_popo
bool
popo__srv__Command_Response__Sequence__init(popo__srv__Command_Response__Sequence * array, size_t size);

/// Finalize array of srv/Command messages.
/**
 * It calls
 * popo__srv__Command_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_popo
void
popo__srv__Command_Response__Sequence__fini(popo__srv__Command_Response__Sequence * array);

/// Create array of srv/Command messages.
/**
 * It allocates the memory for the array and calls
 * popo__srv__Command_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_popo
popo__srv__Command_Response__Sequence *
popo__srv__Command_Response__Sequence__create(size_t size);

/// Destroy array of srv/Command messages.
/**
 * It calls
 * popo__srv__Command_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_popo
void
popo__srv__Command_Response__Sequence__destroy(popo__srv__Command_Response__Sequence * array);

/// Check for srv/Command message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_popo
bool
popo__srv__Command_Response__Sequence__are_equal(const popo__srv__Command_Response__Sequence * lhs, const popo__srv__Command_Response__Sequence * rhs);

/// Copy an array of srv/Command messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_popo
bool
popo__srv__Command_Response__Sequence__copy(
  const popo__srv__Command_Response__Sequence * input,
  popo__srv__Command_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // POPO__SRV__DETAIL__COMMAND__FUNCTIONS_H_
