/*
 * Last update: 31.12.2020
 */


#include "array.h"

void input_array(file_name_t file_name, array_size_t array_size, strings_array_t strings_array)
{
    FILE* input_file = fopen(file_name, "r");
    for(int i = 0; i < array_size; i++)
    {
        fgets(strings_array[i], MAX_INPUT_STRING_SIZE, input_file);
    }
    fclose(input_file);
}

void output_array(file_name_t file_name, array_size_t array_size, strings_array_t strings_array)
{
    FILE* output_file = fopen(file_name, "w");
    for(array_size_t i = 0; i < array_size; i++)
    {
        fputs(strings_array[i], output_file);
    }
    fclose(output_file);
}

void choose_sort(strings_array_t strings_array, array_size_t array_size, comparator_func_t comparator, sort_num_t sort_num)
{
    switch(sort_num)
    {
        case 0:
            bubble(strings_array, array_size, comparator);
            break;
        case 1:
            insertion(strings_array, array_size, comparator);
            break;
        case 2:
            merge(strings_array, array_size, comparator);
            break;
        case 3:
            quick(strings_array, array_size, comparator);
            break;
        case 4:
            radix(strings_array, array_size, comparator);
            break;
        default:
            break; //по дефолту ничего не делаю, потому что до этого данные прошли валидацию, из-за чего точно подаем
                   //sort_num в границах [0, 4]
    }
}

void sort_array(strings_array_t strings_array, array_size_t array_size, comparator_num_t comparator_num, sort_num_t sort_num)
{
    switch(comparator_num)
    {
        case 0:
            choose_sort(strings_array, array_size, comparator_asc, sort_num);
            break;
        case 1:
            choose_sort(strings_array, array_size, comparator_des, sort_num);
            break;
        default:
            break; //аналогично choose_sort
    }
}
