/*
** EPITECH PROJECT, 2026
** G-CPE-100-NCE-1-1-cpoolday08-21
** File description:
** Allocate a copy of a string
*/

#include <stdlib.h>
#include "my.h"

char *my_strdup(char const *src)
{
    int len = my_strlen(src);
    char *dest = malloc(sizeof(char) * (len + 1));

    if (dest == NULL)
        return NULL;
    my_strcpy(dest, src);
    return dest;
}
