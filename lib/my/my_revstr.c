/*
** EPITECH PROJECT, 2026
** G-CPE-100-NCE-1-1-cpoolday06-21
** File description:
** my_revstr
*/

static int get_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return i;
}

char *my_revstr(char *str)
{
    char c;
    int a = 0;
    int b = get_strlen(str) - 1;

    while (a < b) {
        c = str[a];
        str[a] = str[b];
        str[b] = c;
        a++;
        b--;
    }
    return str;
}
