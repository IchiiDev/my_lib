/*
** EPITECH PROJECT, 2022
** mylib
** File description:
** my_isneg function file
*/

#include "my.h"

int my_isneg(int n)
{
    if (n < 0) {
        my_putchar(78);
    } else {
        my_putchar(80);
    }
}
