/*
** EPITECH PROJECT, 2022
** mylib
** File description:
** my_getnbr function file
*/

#include "include/my.h"

int my_getnbr(char const *str) {
    long count = 0;
    int is_minus = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (!IS_NBR(str[i]) && count > 0) {
            return count * is_minus;
        }
        if (count > 2147483648) {
            return 0;
        }
        if (IS_NBR(str[i])) {
            count = count * 10 + (str[i] - '0');
        }
    }
}
