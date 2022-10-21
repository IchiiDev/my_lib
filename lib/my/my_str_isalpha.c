/*
** EPITECH PROJECT, 2022
** mylib
** File description:
** my_str_isalpha function file
*/

#include "my.h"

int my_str_isalpha(char const *str)
{
    int pointer = 0;
    while (str[pointer] != '\0') {
        if (!my_is_alpha(str[pointer])) return 0;
    }
    return 1;
}
