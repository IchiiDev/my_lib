/*
** EPITECH PROJECT, 2022
** mylib
** File description:
** my_is_prime.c
*/

#include "my.h"

int my_is_prime(int nb)
{
    int i = 2;
    int is_prime = 1;
    int root = my_compute_square_root(nb);
    while (i < root && is_prime > 0) {
        if (nb % i == 0) is_prime = 0;
        i += 1;
    }
    return is_prime;
}
