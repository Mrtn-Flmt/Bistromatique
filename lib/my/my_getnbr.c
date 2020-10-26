/*
** EPITECH PROJECT, 2020
** my_getnbr.c
** File description:
** my_getnbr function
*/

int my_getnbr(char *src, int n)
{
    int units = 1;
    int nbr = 0;

    for (int i = 1; i < n; i++)
        units = units * 10;
    for (int index = 0; n > 0; n--, index++) {
        nbr = (src[index] - 48) * units;
        units = units / 10;
    }
    return (nbr);
}