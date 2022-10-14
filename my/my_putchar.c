/*
** EPITECH PROJECT, 2022
** mylib
** File description:
** my_putchar function file
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
