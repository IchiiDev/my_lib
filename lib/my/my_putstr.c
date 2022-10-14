/*
** EPITECH PROJECT, 2022
** mylib
** File description:
** my_putstr function file
*/

void my_putstr(char const *str)
{
    int pointer = 0;
    while (str[pointer] != '\0') {
        my_putchar(str[pointer]);
        pointer += 1;
    }
}
