// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from popo:srv/TestThree.idl
// generated code does not contain a copyright notice
#include "popo/srv/detail/test_three__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
popo__srv__TestThree_Request__init(popo__srv__TestThree_Request * msg)
{
  if (!msg) {
    return false;
  }
  // a
  // b
  // c
  return true;
}

void
popo__srv__TestThree_Request__fini(popo__srv__TestThree_Request * msg)
{
  if (!msg) {
    return;
  }
  // a
  // b
  // c
}

bool
popo__srv__TestThree_Request__are_equal(const popo__srv__TestThree_Request * lhs, const popo__srv__TestThree_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // a
  if (lhs->a != rhs->a) {
    return false;
  }
  // b
  if (lhs->b != rhs->b) {
    return false;
  }
  // c
  if (lhs->c != rhs->c) {
    return false;
  }
  return true;
}

bool
popo__srv__TestThree_Request__copy(
  const popo__srv__TestThree_Request * input,
  popo__srv__TestThree_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // a
  output->a = input->a;
  // b
  output->b = input->b;
  // c
  output->c = input->c;
  return true;
}

popo__srv__TestThree_Request *
popo__srv__TestThree_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  popo__srv__TestThree_Request * msg = (popo__srv__TestThree_Request *)allocator.allocate(sizeof(popo__srv__TestThree_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(popo__srv__TestThree_Request));
  bool success = popo__srv__TestThree_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
popo__srv__TestThree_Request__destroy(popo__srv__TestThree_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    popo__srv__TestThree_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
popo__srv__TestThree_Request__Sequence__init(popo__srv__TestThree_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  popo__srv__TestThree_Request * data = NULL;

  if (size) {
    data = (popo__srv__TestThree_Request *)allocator.zero_allocate(size, sizeof(popo__srv__TestThree_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = popo__srv__TestThree_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        popo__srv__TestThree_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
popo__srv__TestThree_Request__Sequence__fini(popo__srv__TestThree_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      popo__srv__TestThree_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

popo__srv__TestThree_Request__Sequence *
popo__srv__TestThree_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  popo__srv__TestThree_Request__Sequence * array = (popo__srv__TestThree_Request__Sequence *)allocator.allocate(sizeof(popo__srv__TestThree_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = popo__srv__TestThree_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
popo__srv__TestThree_Request__Sequence__destroy(popo__srv__TestThree_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    popo__srv__TestThree_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
popo__srv__TestThree_Request__Sequence__are_equal(const popo__srv__TestThree_Request__Sequence * lhs, const popo__srv__TestThree_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!popo__srv__TestThree_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
popo__srv__TestThree_Request__Sequence__copy(
  const popo__srv__TestThree_Request__Sequence * input,
  popo__srv__TestThree_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(popo__srv__TestThree_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    popo__srv__TestThree_Request * data =
      (popo__srv__TestThree_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!popo__srv__TestThree_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          popo__srv__TestThree_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!popo__srv__TestThree_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
popo__srv__TestThree_Response__init(popo__srv__TestThree_Response * msg)
{
  if (!msg) {
    return false;
  }
  // sum
  return true;
}

void
popo__srv__TestThree_Response__fini(popo__srv__TestThree_Response * msg)
{
  if (!msg) {
    return;
  }
  // sum
}

bool
popo__srv__TestThree_Response__are_equal(const popo__srv__TestThree_Response * lhs, const popo__srv__TestThree_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sum
  if (lhs->sum != rhs->sum) {
    return false;
  }
  return true;
}

bool
popo__srv__TestThree_Response__copy(
  const popo__srv__TestThree_Response * input,
  popo__srv__TestThree_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // sum
  output->sum = input->sum;
  return true;
}

popo__srv__TestThree_Response *
popo__srv__TestThree_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  popo__srv__TestThree_Response * msg = (popo__srv__TestThree_Response *)allocator.allocate(sizeof(popo__srv__TestThree_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(popo__srv__TestThree_Response));
  bool success = popo__srv__TestThree_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
popo__srv__TestThree_Response__destroy(popo__srv__TestThree_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    popo__srv__TestThree_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
popo__srv__TestThree_Response__Sequence__init(popo__srv__TestThree_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  popo__srv__TestThree_Response * data = NULL;

  if (size) {
    data = (popo__srv__TestThree_Response *)allocator.zero_allocate(size, sizeof(popo__srv__TestThree_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = popo__srv__TestThree_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        popo__srv__TestThree_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
popo__srv__TestThree_Response__Sequence__fini(popo__srv__TestThree_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      popo__srv__TestThree_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

popo__srv__TestThree_Response__Sequence *
popo__srv__TestThree_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  popo__srv__TestThree_Response__Sequence * array = (popo__srv__TestThree_Response__Sequence *)allocator.allocate(sizeof(popo__srv__TestThree_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = popo__srv__TestThree_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
popo__srv__TestThree_Response__Sequence__destroy(popo__srv__TestThree_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    popo__srv__TestThree_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
popo__srv__TestThree_Response__Sequence__are_equal(const popo__srv__TestThree_Response__Sequence * lhs, const popo__srv__TestThree_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!popo__srv__TestThree_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
popo__srv__TestThree_Response__Sequence__copy(
  const popo__srv__TestThree_Response__Sequence * input,
  popo__srv__TestThree_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(popo__srv__TestThree_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    popo__srv__TestThree_Response * data =
      (popo__srv__TestThree_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!popo__srv__TestThree_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          popo__srv__TestThree_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!popo__srv__TestThree_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
