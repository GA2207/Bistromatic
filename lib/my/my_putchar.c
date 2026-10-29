/*
** EPITECH PROJECT, 2026
** G-CPE-100-NCE-1-1-cpoolday07-21
** File description:
** Display a single character on the standard output
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
