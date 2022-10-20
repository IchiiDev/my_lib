/*
** EPITECH PROJECT, 2022
** mylib
** File description:
** my_sort_int_array function file
*/

#include "my.h"

int my_sort_int_array(int *array, int size)
{
    if (size < 2) return 0;
    for (int i = 0; i < size - 1; i++) {
        if (array[i] > array[i + 1]) {
            my_swap(&array[i], &array[i + 1]);
        }
    }
    my_sort_int_array(array, size - 1);
}
