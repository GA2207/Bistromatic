/*
** EPITECH PROJECT, 2026
** G-CPE-100-NCE-1-1-cpoolday04-21
** File description:
** my_putstr
*/

#include "my.h"

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return 0;
}
