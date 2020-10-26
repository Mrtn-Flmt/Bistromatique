/*
** EPITECH PROJECT, 2020
** test_final_calc.c
** File description:
** Unit tests
*/

#include <criterion/criterion.h>
#include "../include/my.h"

char *op_str(char *src, char *op);

Test (op_str, all_operator)
{
    char src[] = "3+3-3*3/3%%3";
    char operators[] = "";

    op_str(src, operators);
    cr_assert_str_eq(operators, "+-*/%%");
}