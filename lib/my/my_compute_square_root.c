/*
** EPITECH PROJECT, 2022
** mylib
** File description:
** my_compute_square_root function file
*/

int my_compute_square_root(int nb)
{
    int i = 0;
    while (i * i < 2147483647) {
        if (i * i > nb) return 0;
        if (i * i == nb) return i;
        i += 1;
    }
    return 0;
}
