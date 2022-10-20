/*
** EPITECH PROJECT, 2022
** mylib
** File description:
** my_strncpy function file
*/

#include <stdio.h>

char *my_strncpy(char *dest, char const *str, int n)
{
    int pointer = 0;
    if (dest == NULL || str == NULL) return NULL;
    while (str[pointer] != '\0' && pointer < n ) {
        dest[pointer] = str[pointer];
        pointer += 1;
    }
    if (str[n] == '\0') dest[pointer + 1] = '\0';
    return dest;
}
