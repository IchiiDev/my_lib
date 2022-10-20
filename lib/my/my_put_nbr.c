/*
** EPITECH PROJECT, 2022
** mylib
** File description:
** my_put_nbr function file
*/

#include <unistd.h>

int my_put_nbr(int number)
{
    long nbr = number;
    if (nbr < 0) {
        my_putchar(45);
        nbr = nbr * -1;
    }
    if (nbr > 9) {
        my_put_nbr(nbr / 10);
        my_putchar(48 + nbr % 10);
    } else {
        my_putchar(48 + nbr);
    }
}
