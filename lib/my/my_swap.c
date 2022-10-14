/*
** EPITECH PROJECT, 2022
** mylib
** File description:
** my_swap function file
*/

void my_swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
