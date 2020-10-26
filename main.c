/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main function
*/

#include "include/my.h"

int main(int argc, char **argv)
{
    int nbr[100] = {};
    char operators[] = "";
    int result = 0;

    int_arr(argv[1], nbr);
    op_str(argv[1], operators);
    result += nbr[1];
    result = calc(&nbr[1], operators, result);
    my_put_nbr(result);
    return (0);
}