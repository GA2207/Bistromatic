/*
** EPITECH PROJECT, 2026
** G-CPE-100-NCE-1-1-cpoolday04-21
** File description:
** strlen
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return i;
}
