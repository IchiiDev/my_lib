/*
** EPITECH PROJECT, 2022
** mylib
** File description:
** my_str_islower function file
*/

#include "my.h"

int my_str_islower(char const *str)
{
    int pointer = 0;
    while (str[pointer] != '\0') {
        if (!IS_LOWCASE(str[pointer])) return 0;
        pointer += 1;
    }
    return 1;
}
