/*
** EPITECH PROJECT, 2022
** mylib
** File description:
** my_strlowcase function file
*/

#include "my.h"

char *my_strlowcase(char *str)
{
    int i = 0;
    while (str[i] != '\0') {
        if (IS_UPCASE(str[i])) str[i] = str[i] + 32;
        i += 1;
    }
    return str;
}
