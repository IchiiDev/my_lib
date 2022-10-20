/*
** EPITECH PROJECT, 2022
** mylib
** File description:
** my_computer_power_rec function file
*/

int my_compute_power_rec(int nb, int p)
{
    long nbr = nb;
    if (p == 0) return 1;
    if (p <= 1) return nb;
    nbr = nbr * my_compute_power_rec(nbr, p - 1);
    if (nbr > 2147483647) return 0;
    return nbr;
}
