/*
** EPITECH PROJECT, 2021
** eval_expr.c
** File description:
** bistro
*/

#include <stdlib.h>
#include "bistro.h"
#include "my.h"

char *summands(char **str_ptr);

char *parenthesis(char **str_ptr, int i, int n)
{
    char *nb;

    (*str_ptr)++;
    nb = (summands(str_ptr));
    if (str_ptr[0][i] == ')') {
        (*str_ptr)++;
    }
    if (n % 2 == 1)
        my_putchar('-');
    return (nb);
}

char *number(char **str_ptr)
{
    int i = 0;
    char *nb = malloc(sizeof(char) * my_strlen(str_ptr[0]));
    int n = 0;
    int copy = 0;

    for (; str_ptr[0][i] == '-' || str_ptr[0][i] == '+' ||
        str_ptr[0][i] == '*' || str_ptr[0][i] == '/' ||
        str_ptr[0][i] == '%' || str_ptr[0][i] == ' '; i++)
        if (str_ptr[0][i] == '-')
            n++;
    if (str_ptr[0][i] == '(')
        return (parenthesis(str_ptr, i, n));
    for (; (str_ptr[0][i] >= '0' && str_ptr[0][i] <= '9') &&
            str_ptr[0][i] != '\0'; i++) {
        nb[copy] = str_ptr[0][i];
        copy++;
    }
    *str_ptr = &str_ptr[0][i];
    nb[i] = '\0';
    return (nb);
}

char *factors(char **str_ptr)
{
    char *nbr = malloc(sizeof(char) * (my_strlen(str_ptr[0]) * 2));
    nbr = number(str_ptr);
    while (**str_ptr == ' ')
        (*str_ptr)++;
    while (**str_ptr == '*' || **str_ptr == '/' || **str_ptr == '%') {
        if (**str_ptr == '*') {
            nbr = mult_inf(nbr, number(str_ptr));
        }
        if (**str_ptr == '/') {
            nbr = div_inf(nbr, number(str_ptr));
            if (nbr == NULL)
                exit(84);
        }
        if (**str_ptr == '%') {
            nbr = mod_inf(nbr, number(str_ptr));
            if (nbr == NULL)
                exit(84);
        }
    }
    nbr[my_strlen(nbr)] = '\0';
    return (nbr);
}

char *summands(char **str_ptr)
{
    char *nbr = factors(str_ptr);

    while (**str_ptr == ' ')
        (*str_ptr)++;
    while (**str_ptr != '\0' && **str_ptr != ')') {
        if (**str_ptr == '+')
            nbr = add_inf(nbr, factors(str_ptr));
        if (**str_ptr == '-')
            nbr = sub_inf(nbr, factors(str_ptr));
    }
    nbr[my_strlen(nbr)] = '\0';
    return (nbr);
}

char *eval_expr(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] < '0' || str[i] > '9') && str[i] != '*' && str[i] != '-'
            && str[i] != '+' && str[i] != '/' && str[i] != '%') {
            my_putstr(SYNTAX_ERROR_MSG);
            exit (84);
        }
    }
    return (summands(&str));
}
