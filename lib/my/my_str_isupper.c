/*
** EPITECH PROJECT, 2022
** mylib
** File description:
** my_str_isupper function file
*/

#include "my.h"

int my_str_isupper(char const *str)
{
    int pointer = 0;
    while (str[pointer] != '\0') {
        if (!IS_UPCASE(str[pointer])) return 0;
        pointer += 1;
    }
    return 1;
}
