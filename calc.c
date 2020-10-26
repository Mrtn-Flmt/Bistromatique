/*
** EPITECH PROJECT, 2020
** calc.c
** File description:
** calculator functions
*/

int calc(int *nbr, char *operators, int result)
{
    if (operators[0] == '+') {
        result += nbr[1];
        return (calc(&nbr[1], &operators[1], result));
    } else if (operators[0] == '-') {
        result -= nbr[1];
        return (calc(&nbr[1], &operators[1], result));
    } else if (operators[0] == '*') {
        result *= nbr[1];
        return (calc(&nbr[1], &operators[1], result));
    }
    if (operators[0] == '/') {
        result /= nbr[1];
        return (calc(&nbr[1], &operators[1], result));
    } else if (operators[0] == '%') {
        result %= nbr[1];
        return (calc(&nbr[1], &operators[2], result));
    }
    return (result);
}