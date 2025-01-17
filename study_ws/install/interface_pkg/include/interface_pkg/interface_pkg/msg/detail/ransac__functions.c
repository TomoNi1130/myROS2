// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interface_pkg:msg/Ransac.idl
// generated code does not contain a copyright notice
#include "interface_pkg/msg/detail/ransac__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
interface_pkg__msg__Ransac__init(interface_pkg__msg__Ransac * msg)
{
  if (!msg) {
    return false;
  }
  // low_x
  // high_x
  // low_y
  // high_y
  // a
  // b
  // c
  // distance
  // theta
  return true;
}

void
interface_pkg__msg__Ransac__fini(interface_pkg__msg__Ransac * msg)
{
  if (!msg) {
    return;
  }
  // low_x
  // high_x
  // low_y
  // high_y
  // a
  // b
  // c
  // distance
  // theta
}

bool
interface_pkg__msg__Ransac__are_equal(const interface_pkg__msg__Ransac * lhs, const interface_pkg__msg__Ransac * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // low_x
  if (lhs->low_x != rhs->low_x) {
    return false;
  }
  // high_x
  if (lhs->high_x != rhs->high_x) {
    return false;
  }
  // low_y
  if (lhs->low_y != rhs->low_y) {
    return false;
  }
  // high_y
  if (lhs->high_y != rhs->high_y) {
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
  // distance
  if (lhs->distance != rhs->distance) {
    return false;
  }
  // theta
  if (lhs->theta != rhs->theta) {
    return false;
  }
  return true;
}

bool
interface_pkg__msg__Ransac__copy(
  const interface_pkg__msg__Ransac * input,
  interface_pkg__msg__Ransac * output)
{
  if (!input || !output) {
    return false;
  }
  // low_x
  output->low_x = input->low_x;
  // high_x
  output->high_x = input->high_x;
  // low_y
  output->low_y = input->low_y;
  // high_y
  output->high_y = input->high_y;
  // a
  output->a = input->a;
  // b
  output->b = input->b;
  // c
  output->c = input->c;
  // distance
  output->distance = input->distance;
  // theta
  output->theta = input->theta;
  return true;
}

interface_pkg__msg__Ransac *
interface_pkg__msg__Ransac__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_pkg__msg__Ransac * msg = (interface_pkg__msg__Ransac *)allocator.allocate(sizeof(interface_pkg__msg__Ransac), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interface_pkg__msg__Ransac));
  bool success = interface_pkg__msg__Ransac__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interface_pkg__msg__Ransac__destroy(interface_pkg__msg__Ransac * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interface_pkg__msg__Ransac__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interface_pkg__msg__Ransac__Sequence__init(interface_pkg__msg__Ransac__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_pkg__msg__Ransac * data = NULL;

  if (size) {
    data = (interface_pkg__msg__Ransac *)allocator.zero_allocate(size, sizeof(interface_pkg__msg__Ransac), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interface_pkg__msg__Ransac__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interface_pkg__msg__Ransac__fini(&data[i - 1]);
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
interface_pkg__msg__Ransac__Sequence__fini(interface_pkg__msg__Ransac__Sequence * array)
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
      interface_pkg__msg__Ransac__fini(&array->data[i]);
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

interface_pkg__msg__Ransac__Sequence *
interface_pkg__msg__Ransac__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_pkg__msg__Ransac__Sequence * array = (interface_pkg__msg__Ransac__Sequence *)allocator.allocate(sizeof(interface_pkg__msg__Ransac__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interface_pkg__msg__Ransac__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interface_pkg__msg__Ransac__Sequence__destroy(interface_pkg__msg__Ransac__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interface_pkg__msg__Ransac__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interface_pkg__msg__Ransac__Sequence__are_equal(const interface_pkg__msg__Ransac__Sequence * lhs, const interface_pkg__msg__Ransac__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interface_pkg__msg__Ransac__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interface_pkg__msg__Ransac__Sequence__copy(
  const interface_pkg__msg__Ransac__Sequence * input,
  interface_pkg__msg__Ransac__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interface_pkg__msg__Ransac);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interface_pkg__msg__Ransac * data =
      (interface_pkg__msg__Ransac *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interface_pkg__msg__Ransac__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interface_pkg__msg__Ransac__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interface_pkg__msg__Ransac__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
