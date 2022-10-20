/*
** EPITECH PROJECT, 2022
** mylib
** File description:
** my_strncat function file
*/

#include "my.h"

char *my_strncat(char *dest, char const *src, int n)
{
    int i = 0;
    int size = my_strlen(dest);
    if (n < 0) return dest;
    while (src[i] != '\0' && i < n) {
        dest[i + size] = src[i];
        i += 1;
    }

    dest[size + i] = '\0';

    return dest;
}
