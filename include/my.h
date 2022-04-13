/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** header file that contains the prototypes of
** all the functions exposed by your libmy.a
*/

#ifndef MY_H_
#define MY_H_

int my_strtol(char const *str, char **end_ptr);
char *my_nbrtostr(int nb);
char *my_strdup(char const *src);
void my_putchar(char c);
char *my_strstr(char *str, char const *to_find);
int my_isneg(int n);
int my_strcmp(char const *s1, char const *s2);
int my_putnbr(int nb);
int my_strncmp(char const *s1, char const *s2, int n);
void my_swap(int *a, int *b);
char *my_strupcase(char *str);
int my_putstr(char const *str);
char *my_strlowcase(char *str);
int my_strlen(char const *str);
char *my_strcapitalize(char *str);
int my_getnbr(char const *str);
int my_str_isalpha(char const *str);
void my_sort_int_array(int *tab, int size);
int my_str_isnum(char const *str);
int my_compute_power_it(int nb, int p);
int my_compute_power_rec(int nb, int p);
int my_str_islower(char const *str);
int my_compute_square_root(int nb);
int my_str_isupper(char const *str);
int my_is_prime(int nb);
int my_str_isprintable(char const *str);
int my_find_prime_sup(int nb);
int my_showstr(char const *str);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strcat(char *dest, char const *src);
char *my_revstr(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int len_alphanum_str(char const *str);
int my_isnum(char c);
char *my_memset(char *str, int a, int n);
int my_alphanum(char c);
int my_str_count_word(char const *str);
int my_wordlen(char const *str);
int my_show_word_array(char * const *tab);
char *my_nbrtostr(int nb);
int my_nbrlen(int nb);
#endif // my.h
