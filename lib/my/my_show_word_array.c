/*
** EPITECH PROJECT, 2022
** cpoolday08
** File description:
** concat_params function file
*/

#include <stdlib.h>
#include "include/my.h"

int get_total_size2(int size, char **array);
int get_array_size(char **array);

char *my_show_word_array(char **array)
{
    int array_size = get_array_size(array);
    int size = get_total_size2(array_size, array);
    char *result = malloc(size);
    for (int i = 0; i < array_size; i++) {
        int str_size = my_strlen(array[i]);
        for (int j = 0; j < str_size; j++) {
            my_putchar(array[i][j]);
        }
        my_putchar('\n');
    }
}

int get_total_size2(int size, char **array)
{
    int total = size;
    for (int i = 0; i < size; i += 1) {
        total += my_strlen(array[i]);
    }

    return total;
}

int get_array_size(char **array)
{
    int pointer = 0;
    while (array[pointer] != 0) {
        pointer += 1;
    }
    return pointer;
}
