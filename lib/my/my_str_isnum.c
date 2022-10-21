/*
** EPITECH PROJECT, 2022
** mylib
** File description:
** my_str_isnum function file
*/

#include "my.h"

int my_str_isnum(char const *str)
{
    int pointer = 0;
    while (str[pointer] != '\0') {
        if (!IS_NBR(str[pointer])) return 0;
        pointer += 1;
    }
    return 1;
}
