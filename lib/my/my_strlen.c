/*
** EPITECH PROJECT, 2022
** mylib
** File description:
** my_strlen function file
*/

int my_strlen(char const *str);

int my_strlen(char const *str)
{
    int pointer = 0;
    while (str[pointer] != '\0') {
        pointer += 1;
    }
    return pointer;
}
