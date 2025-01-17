// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from study_interface:msg/Cloud.idl
// generated code does not contain a copyright notice
#include "study_interface/msg/detail/cloud__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `cloudx`
// Member `cloudy`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
study_interface__msg__Cloud__init(study_interface__msg__Cloud * msg)
{
  if (!msg) {
    return false;
  }
  // cloudx
  if (!rosidl_runtime_c__double__Sequence__init(&msg->cloudx, 0)) {
    study_interface__msg__Cloud__fini(msg);
    return false;
  }
  // cloudy
  if (!rosidl_runtime_c__double__Sequence__init(&msg->cloudy, 0)) {
    study_interface__msg__Cloud__fini(msg);
    return false;
  }
  return true;
}

void
study_interface__msg__Cloud__fini(study_interface__msg__Cloud * msg)
{
  if (!msg) {
    return;
  }
  // cloudx
  rosidl_runtime_c__double__Sequence__fini(&msg->cloudx);
  // cloudy
  rosidl_runtime_c__double__Sequence__fini(&msg->cloudy);
}

bool
study_interface__msg__Cloud__are_equal(const study_interface__msg__Cloud * lhs, const study_interface__msg__Cloud * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cloudx
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->cloudx), &(rhs->cloudx)))
  {
    return false;
  }
  // cloudy
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->cloudy), &(rhs->cloudy)))
  {
    return false;
  }
  return true;
}

bool
study_interface__msg__Cloud__copy(
  const study_interface__msg__Cloud * input,
  study_interface__msg__Cloud * output)
{
  if (!input || !output) {
    return false;
  }
  // cloudx
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->cloudx), &(output->cloudx)))
  {
    return false;
  }
  // cloudy
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->cloudy), &(output->cloudy)))
  {
    return false;
  }
  return true;
}

study_interface__msg__Cloud *
study_interface__msg__Cloud__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  study_interface__msg__Cloud * msg = (study_interface__msg__Cloud *)allocator.allocate(sizeof(study_interface__msg__Cloud), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(study_interface__msg__Cloud));
  bool success = study_interface__msg__Cloud__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
study_interface__msg__Cloud__destroy(study_interface__msg__Cloud * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    study_interface__msg__Cloud__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
study_interface__msg__Cloud__Sequence__init(study_interface__msg__Cloud__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  study_interface__msg__Cloud * data = NULL;

  if (size) {
    data = (study_interface__msg__Cloud *)allocator.zero_allocate(size, sizeof(study_interface__msg__Cloud), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = study_interface__msg__Cloud__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        study_interface__msg__Cloud__fini(&data[i - 1]);
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
study_interface__msg__Cloud__Sequence__fini(study_interface__msg__Cloud__Sequence * array)
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
      study_interface__msg__Cloud__fini(&array->data[i]);
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

study_interface__msg__Cloud__Sequence *
study_interface__msg__Cloud__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  study_interface__msg__Cloud__Sequence * array = (study_interface__msg__Cloud__Sequence *)allocator.allocate(sizeof(study_interface__msg__Cloud__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = study_interface__msg__Cloud__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
study_interface__msg__Cloud__Sequence__destroy(study_interface__msg__Cloud__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    study_interface__msg__Cloud__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
study_interface__msg__Cloud__Sequence__are_equal(const study_interface__msg__Cloud__Sequence * lhs, const study_interface__msg__Cloud__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!study_interface__msg__Cloud__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
study_interface__msg__Cloud__Sequence__copy(
  const study_interface__msg__Cloud__Sequence * input,
  study_interface__msg__Cloud__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(study_interface__msg__Cloud);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    study_interface__msg__Cloud * data =
      (study_interface__msg__Cloud *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!study_interface__msg__Cloud__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          study_interface__msg__Cloud__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!study_interface__msg__Cloud__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
