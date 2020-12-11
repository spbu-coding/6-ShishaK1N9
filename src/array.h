/*
 * Last update: 31.12.2020
 */


#ifndef HOMEWORK_6_2_ARRAY_H
#define HOMEWORK_6_2_ARRAY_H

#include <stdio.h>
#include <stdlib.h>

#include "sortings.h"
#include "validate.h"

typedef int sort_num_t, comparator_num_t;

void input_array(file_name_t, array_size_t, strings_array_t);

void output_array(file_name_t, array_size_t, strings_array_t);

void sort_array(strings_array_t, array_size_t, comparator_num_t, sort_num_t);

#endif //HOMEWORK_6_2_ARRAY_H
