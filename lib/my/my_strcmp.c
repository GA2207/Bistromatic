/*
** EPITECH PROJECT, 2026
** G-CPE-100-NCE-1-1-cpoolday06-21
** File description:
** my_strcmp
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    while (s1[i] != '\0' && s1[i] == s2[i]) {
        i++;
    }
    return (unsigned char) s1[i] - (unsigned char) s2[i];
}
