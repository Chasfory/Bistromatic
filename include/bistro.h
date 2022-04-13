/*
** EPITECH PROJECT, 2021
** bistro.h
** File description:
** bistro core functions
*/

#ifndef BISTRO_H_
#define BISTRO_H_

#define OP_OPEN_PARENT_IDX   0
#define OP_CLOSE_PARENT_IDX  1
#define OP_PLUS_IDX          2
#define OP_SUB_IDX           3
#define OP_NEG_IDX           3
#define OP_MULT_IDX          4
#define OP_DIV_IDX           5
#define OP_MOD_IDX           6

#define EXIT_USAGE     84
#define EXIT_BASE      84
#define EXIT_SIZE_NEG  84
#define EXIT_MALLOC    84
#define EXIT_READ      84
#define EXIT_OPS       84
#define EXIT_CALC      84

#define SYNTAX_ERROR_MSG "syntax error"
#define ERROR_MSG        "error"

int is_neg(char const *str);
char *clean_result(char *result, int endstr, int neg);
char *clean_result2(char *result, int n);
int sign_nbr(char const *str);
char *special_cases(char *nb1, char *nb2, char *result);
int longuest_str(char const *str1, char const *str2);
int error(char const *str1, char const *str2);
int longuest_str(char const *str1, char const *str2);
int nbr_cmp(char const *str1, char const *str2);
char *fill_zero(char *src, int n);
char *rm_sign(char *src);
char *skip_sign(char const *str);
char *mult_inf(char const *str1, char const *str2);
char *sub_inf(char const *str1, char const *str2);
char *add_inf(char const *str1, char const *str2);
char *div_inf(char const *str1, char const *str2);
char *mod_inf(char const *str1, char const *str2);
char *eval_expr(char *str);
int man(void);
int nbr_av(int ac);

#endif
