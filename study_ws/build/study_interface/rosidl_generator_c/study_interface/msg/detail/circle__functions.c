// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from study_interface:msg/Circle.idl
// generated code does not contain a copyright notice
#include "study_interface/msg/detail/circle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `centerx`
// Member `centery`
// Member `radius`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
study_interface__msg__Circle__init(study_interface__msg__Circle * msg)
{
  if (!msg) {
    return false;
  }
  // centerx
  if (!rosidl_runtime_c__double__Sequence__init(&msg->centerx, 0)) {
    study_interface__msg__Circle__fini(msg);
    return false;
  }
  // centery
  if (!rosidl_runtime_c__double__Sequence__init(&msg->centery, 0)) {
    study_interface__msg__Circle__fini(msg);
    return false;
  }
  // radius
  if (!rosidl_runtime_c__double__Sequence__init(&msg->radius, 0)) {
    study_interface__msg__Circle__fini(msg);
    return false;
  }
  return true;
}

void
study_interface__msg__Circle__fini(study_interface__msg__Circle * msg)
{
  if (!msg) {
    return;
  }
  // centerx
  rosidl_runtime_c__double__Sequence__fini(&msg->centerx);
  // centery
  rosidl_runtime_c__double__Sequence__fini(&msg->centery);
  // radius
  rosidl_runtime_c__double__Sequence__fini(&msg->radius);
}

bool
study_interface__msg__Circle__are_equal(const study_interface__msg__Circle * lhs, const study_interface__msg__Circle * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // centerx
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->centerx), &(rhs->centerx)))
  {
    return false;
  }
  // centery
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->centery), &(rhs->centery)))
  {
    return false;
  }
  // radius
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->radius), &(rhs->radius)))
  {
    return false;
  }
  return true;
}

bool
study_interface__msg__Circle__copy(
  const study_interface__msg__Circle * input,
  study_interface__msg__Circle * output)
{
  if (!input || !output) {
    return false;
  }
  // centerx
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->centerx), &(output->centerx)))
  {
    return false;
  }
  // centery
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->centery), &(output->centery)))
  {
    return false;
  }
  // radius
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->radius), &(output->radius)))
  {
    return false;
  }
  return true;
}

study_interface__msg__Circle *
study_interface__msg__Circle__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  study_interface__msg__Circle * msg = (study_interface__msg__Circle *)allocator.allocate(sizeof(study_interface__msg__Circle), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(study_interface__msg__Circle));
  bool success = study_interface__msg__Circle__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
study_interface__msg__Circle__destroy(study_interface__msg__Circle * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    study_interface__msg__Circle__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
study_interface__msg__Circle__Sequence__init(study_interface__msg__Circle__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  study_interface__msg__Circle * data = NULL;

  if (size) {
    data = (study_interface__msg__Circle *)allocator.zero_allocate(size, sizeof(study_interface__msg__Circle), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = study_interface__msg__Circle__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        study_interface__msg__Circle__fini(&data[i - 1]);
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
study_interface__msg__Circle__Sequence__fini(study_interface__msg__Circle__Sequence * array)
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
      study_interface__msg__Circle__fini(&array->data[i]);
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

study_interface__msg__Circle__Sequence *
study_interface__msg__Circle__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  study_interface__msg__Circle__Sequence * array = (study_interface__msg__Circle__Sequence *)allocator.allocate(sizeof(study_interface__msg__Circle__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = study_interface__msg__Circle__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
study_interface__msg__Circle__Sequence__destroy(study_interface__msg__Circle__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    study_interface__msg__Circle__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
study_interface__msg__Circle__Sequence__are_equal(const study_interface__msg__Circle__Sequence * lhs, const study_interface__msg__Circle__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!study_interface__msg__Circle__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
study_interface__msg__Circle__Sequence__copy(
  const study_interface__msg__Circle__Sequence * input,
  study_interface__msg__Circle__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(study_interface__msg__Circle);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    study_interface__msg__Circle * data =
      (study_interface__msg__Circle *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!study_interface__msg__Circle__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          study_interface__msg__Circle__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!study_interface__msg__Circle__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
