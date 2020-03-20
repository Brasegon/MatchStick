/*
** EPITECH PROJECT, 2018
** MatchStick
** File description:
** Brandon Segers
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "utils/get_next_line.h"
#include "lib/my_printf.h"
#include <time.h>
typedef struct z_t
{
    int match;
    int line;
    int *tab;
    int i;
    int c;
    int b;
    int z;
    char *str;
    int v;
    int d;
    char **av;
}z_s;

void get(z_s *t);
void triangle(z_s *t);
void init(z_s *t);
void put(char c);
int     my_getnbr(char *str);
void player_p_error(z_s *t, int i);
void player_p_next(z_s *t, int i);
void player_p(z_s *t, int i);
void my_put_nbr(int nb);
void            my_putchar(char c);
char            *get_next_line(const int fd);
char     *my_strncpy(char *dest, char *src, int n);
void     *my_malloc(unsigned int size);
char     *add_to_line(char *line, int treat, char *buff, int *start);
int player_matches(z_s *t);
int my_str_isnum(char *str);
void player_error_matches(z_s *t);
void player_error(z_s *t);
