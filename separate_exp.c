/*
** EPITECH PROJECT, 2020
** final_calc.c
** File description:
** separations into two array, one for the operators, another for the factors
*/

#include "include/my.h"

int *int_arr(char *str, int *units)
{
    int count = 0;
    int index_n_str = 0;
    char *dup;

    for (int index_u = 1, index_str = 0; index_str != (my_strlen(str) + 1);) {
        if (str[index_str] >= '0' && str[index_str] <= '9') {
            index_str++;
            count++;
        } else {
            index_str++;
            dup = my_strndup(&str[index_n_str], count);
            units[index_u] = my_getnbr(dup, count);
            count = 0;
            index_n_str = index_str;
            index_u++;
        }
    }
    return (units);
}

char *op_str(char *src, char *op)
{
    int index_op = 0;
    int index_src = 0;

    while (src[index_src] != '\0') {
        if (src[index_src] < '0' || src[index_src] > '9') {
            op[index_op] = src[index_src];
            index_op++;
            index_src++;
        } else {
            index_src++;
        }
    }
    op[index_op] = '\0';
    return (op);
}