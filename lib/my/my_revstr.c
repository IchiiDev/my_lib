/*
** EPITECH PROJECT, 2022
** mylib
** File description:
** my_revstr function file
*/

#include "my.h"

static int swap(char *a, char *b);

char *my_revstr(char *str)
{
    int size = my_strlen(str);
    int mid = size / 2;
    for (int i = 0; i < mid; i++) {
        swap(&str[i], &str[size - i - 1]);
    }
    return str;
}

static int swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}
