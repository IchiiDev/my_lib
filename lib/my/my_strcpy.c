/*
** EPITECH PROJECT, 2022
** mylib
** File description:
** my_strcpy function file
*/

#include <stddef.h>

char * my_strcpy(char *dest, char const *str)
{
    int pointer = 0;
    if (dest == NULL || str == NULL) return NULL;
    while (str[pointer] != '\0') {
        dest[pointer] = str[pointer];
        pointer += 1;
    }
    dest[pointer] = '\0';
    return dest;
}
