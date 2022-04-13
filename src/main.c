/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include "my.h"
#include "macro.h"
#include "bistro.h"

static char *get_expr(unsigned int size)
{
    char *expr = NULL;

    if (size <= 0) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_SIZE_NEG);
    }
    expr = malloc(size + 1);
    if (expr == 0 || expr == NULL) {
        my_putstr(ERROR_MSG);
        exit(EXIT_MALLOC);
    }
    if (read(0, expr, size) != size) {
        my_putstr(ERROR_MSG);
        exit(EXIT_READ);
    }
    expr[size] = '\0';
    return (expr);
}

static void check_ops(char const *ops)
{
    if (my_strlen(ops) != 7 || my_strcmp(ops, "()+-*/%") != 0) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_OPS);
    }
}

static void check_base(char const *b)
{
    if (my_strlen(b) != 10 || my_strcmp(b, "0123456789") != 0) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_BASE);
    }
}

int main(int ac, char **av)
{
    unsigned int size = 0;
    char *expr = NULL;

    if (my_strcmp(av[1], "-h") == 0 || my_strcmp(av[1], "--help") == 0)
        return man();
    if (nbr_av(ac) == 1)
        return (EXIT_USAGE);
    check_base(av[1]);
    check_ops(av[2]);
    size = my_getnbr(av[3]);
    expr = get_expr(size);
    my_putstr(eval_expr(expr));
    return (EXIT_SUCCESS);
}
