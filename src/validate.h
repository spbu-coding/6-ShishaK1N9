/*
 * Last update: 30.12.2020
 */


#ifndef HOMEWORK_6_2_VALIDATE_H
#define HOMEWORK_6_2_VALIDATE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "sortings.h"

#define string_to_int(string) strtol(string, NULL, 10)
#define size_of_array(array) sizeof(array) / sizeof(char*)

static const char *SORT_NAMES[] = {"bubble", "insertion", "merge", "quick", "radix"}, *COMP_NAMES[] = {"asc", "des"};
static const int PARAMETERS_COUNT = 5, SUCCESSFUL_EXIT_CODE = 0, UNSUCCESSFUL_EXIT_CODE = -1;
static const int ARG_COUNT_OF_STRINGS = 1, ARG_INPUT_FILE_NAME = 2, ARG_OUTPUT_FILE_NAME = 3;
static const int ARG_SORT_NAME = 4, ARG_COMPARATOR_NAME = 5;
static const int SORTS_COUNT = size_of_array(SORT_NAMES), COMPS_COUNT = size_of_array(COMP_NAMES);

typedef size_t count_of_strings_t;
typedef int parameters_count_t;
typedef char *string_t, *file_name_t;
typedef const char** const_string_array_t;
typedef char** parameters_t;

int is_string_in_array(string_t, const_string_array_t, array_size_t);

int check_parameters(parameters_count_t, parameters_t);

#endif //HOMEWORK_6_2_VALIDATE_H
