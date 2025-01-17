// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from study_interface:msg/Line.idl
// generated code does not contain a copyright notice
#include "study_interface/msg/detail/line__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `low_x`
// Member `high_x`
// Member `low_y`
// Member `high_y`
// Member `a`
// Member `b`
// Member `c`
// Member `distance`
// Member `theta`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
study_interface__msg__Line__init(study_interface__msg__Line * msg)
{
  if (!msg) {
    return false;
  }
  // low_x
  if (!rosidl_runtime_c__double__Sequence__init(&msg->low_x, 0)) {
    study_interface__msg__Line__fini(msg);
    return false;
  }
  // high_x
  if (!rosidl_runtime_c__double__Sequence__init(&msg->high_x, 0)) {
    study_interface__msg__Line__fini(msg);
    return false;
  }
  // low_y
  if (!rosidl_runtime_c__double__Sequence__init(&msg->low_y, 0)) {
    study_interface__msg__Line__fini(msg);
    return false;
  }
  // high_y
  if (!rosidl_runtime_c__double__Sequence__init(&msg->high_y, 0)) {
    study_interface__msg__Line__fini(msg);
    return false;
  }
  // a
  if (!rosidl_runtime_c__double__Sequence__init(&msg->a, 0)) {
    study_interface__msg__Line__fini(msg);
    return false;
  }
  // b
  if (!rosidl_runtime_c__double__Sequence__init(&msg->b, 0)) {
    study_interface__msg__Line__fini(msg);
    return false;
  }
  // c
  if (!rosidl_runtime_c__double__Sequence__init(&msg->c, 0)) {
    study_interface__msg__Line__fini(msg);
    return false;
  }
  // distance
  if (!rosidl_runtime_c__double__Sequence__init(&msg->distance, 0)) {
    study_interface__msg__Line__fini(msg);
    return false;
  }
  // theta
  if (!rosidl_runtime_c__double__Sequence__init(&msg->theta, 0)) {
    study_interface__msg__Line__fini(msg);
    return false;
  }
  return true;
}

void
study_interface__msg__Line__fini(study_interface__msg__Line * msg)
{
  if (!msg) {
    return;
  }
  // low_x
  rosidl_runtime_c__double__Sequence__fini(&msg->low_x);
  // high_x
  rosidl_runtime_c__double__Sequence__fini(&msg->high_x);
  // low_y
  rosidl_runtime_c__double__Sequence__fini(&msg->low_y);
  // high_y
  rosidl_runtime_c__double__Sequence__fini(&msg->high_y);
  // a
  rosidl_runtime_c__double__Sequence__fini(&msg->a);
  // b
  rosidl_runtime_c__double__Sequence__fini(&msg->b);
  // c
  rosidl_runtime_c__double__Sequence__fini(&msg->c);
  // distance
  rosidl_runtime_c__double__Sequence__fini(&msg->distance);
  // theta
  rosidl_runtime_c__double__Sequence__fini(&msg->theta);
}

bool
study_interface__msg__Line__are_equal(const study_interface__msg__Line * lhs, const study_interface__msg__Line * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // low_x
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->low_x), &(rhs->low_x)))
  {
    return false;
  }
  // high_x
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->high_x), &(rhs->high_x)))
  {
    return false;
  }
  // low_y
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->low_y), &(rhs->low_y)))
  {
    return false;
  }
  // high_y
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->high_y), &(rhs->high_y)))
  {
    return false;
  }
  // a
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->a), &(rhs->a)))
  {
    return false;
  }
  // b
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->b), &(rhs->b)))
  {
    return false;
  }
  // c
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->c), &(rhs->c)))
  {
    return false;
  }
  // distance
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->distance), &(rhs->distance)))
  {
    return false;
  }
  // theta
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->theta), &(rhs->theta)))
  {
    return false;
  }
  return true;
}

bool
study_interface__msg__Line__copy(
  const study_interface__msg__Line * input,
  study_interface__msg__Line * output)
{
  if (!input || !output) {
    return false;
  }
  // low_x
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->low_x), &(output->low_x)))
  {
    return false;
  }
  // high_x
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->high_x), &(output->high_x)))
  {
    return false;
  }
  // low_y
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->low_y), &(output->low_y)))
  {
    return false;
  }
  // high_y
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->high_y), &(output->high_y)))
  {
    return false;
  }
  // a
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->a), &(output->a)))
  {
    return false;
  }
  // b
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->b), &(output->b)))
  {
    return false;
  }
  // c
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->c), &(output->c)))
  {
    return false;
  }
  // distance
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->distance), &(output->distance)))
  {
    return false;
  }
  // theta
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->theta), &(output->theta)))
  {
    return false;
  }
  return true;
}

study_interface__msg__Line *
study_interface__msg__Line__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  study_interface__msg__Line * msg = (study_interface__msg__Line *)allocator.allocate(sizeof(study_interface__msg__Line), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(study_interface__msg__Line));
  bool success = study_interface__msg__Line__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
study_interface__msg__Line__destroy(study_interface__msg__Line * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    study_interface__msg__Line__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
study_interface__msg__Line__Sequence__init(study_interface__msg__Line__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  study_interface__msg__Line * data = NULL;

  if (size) {
    data = (study_interface__msg__Line *)allocator.zero_allocate(size, sizeof(study_interface__msg__Line), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = study_interface__msg__Line__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        study_interface__msg__Line__fini(&data[i - 1]);
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
study_interface__msg__Line__Sequence__fini(study_interface__msg__Line__Sequence * array)
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
      study_interface__msg__Line__fini(&array->data[i]);
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

study_interface__msg__Line__Sequence *
study_interface__msg__Line__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  study_interface__msg__Line__Sequence * array = (study_interface__msg__Line__Sequence *)allocator.allocate(sizeof(study_interface__msg__Line__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = study_interface__msg__Line__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
study_interface__msg__Line__Sequence__destroy(study_interface__msg__Line__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    study_interface__msg__Line__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
study_interface__msg__Line__Sequence__are_equal(const study_interface__msg__Line__Sequence * lhs, const study_interface__msg__Line__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!study_interface__msg__Line__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
study_interface__msg__Line__Sequence__copy(
  const study_interface__msg__Line__Sequence * input,
  study_interface__msg__Line__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(study_interface__msg__Line);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    study_interface__msg__Line * data =
      (study_interface__msg__Line *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!study_interface__msg__Line__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          study_interface__msg__Line__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!study_interface__msg__Line__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
