/*
** EPITECH PROJECT, 2020
** my_strdup.c
** File description:
** Function my_strndup that duplicates a string into another, depending on the
** number passed as argument.
*/

#include <stdlib.h>

int my_strlen(char const *str);

char *my_strndup(char const *src, int n)
{
    char *clone;
    int i;

    clone = malloc(sizeof(char) * (n + 1));
    for (i = 0; i != n; i++) {
        clone[i] = src[i];
    }
    clone[i] = '\0';
    return (clone);
}
