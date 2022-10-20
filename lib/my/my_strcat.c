/*
** EPITECH PROJECT, 2022
** mylib
** File description:
** my_strcat function file
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int size = my_strlen(dest);
    int src_size = my_strlen(src);

    while (src[i] != '\0') {
        dest[i + size] = src[i];
        i += 1;
    }

    dest[size + i] = '\0';

    return dest;
}
