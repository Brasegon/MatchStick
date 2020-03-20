/*
** EPITECH PROJECT, 2019
** matchstick
** File description:
** Brandon SEGERS
*/
#include "struct.h"

void    init(z_s *t)
{
    int i = 0;

    t->tab = malloc(sizeof(int) * (t->line + 1));
    for (i = 0; i < t->line; ++i)
        t->tab[i] = (2 * i + 1);
    triangle(t);
    t->b = 1;
    t->c = 1;
}

int ai_play(z_s *t)
{
    int i = 0;
    int z = 0;

    t->c = rand()%(t->line + 1) + 1;
    t->b = rand()%t->match + 1;
    if ((t->tab[t->c - 1] == 0 && i < t->line)
        || (t->tab[t->c - 1] - t->b < 0)){
        ai_play(t);
    } else {
        my_printf("AI removed %d match(es) from line %d\n", t->b, t->c);
        t->tab[t->c - 1] = t->tab[t->c - 1] - t->b;
        triangle(t);
        t->z = 0;
    }
    while (z++ < t->line)
        if (t->tab[z - 1] != 0)
            return (0);
    t->d = 1;
    return (0);
}

void    triangle(z_s *t)
{
    int i = 0;
    int j = 0;

    for (i = 0; i < ((2 * t->line) + 1); ++i)
        put('*');
    put(10);
    for (i = 0; i < t->line; ++i) {
        put('*');
        for (j = 0; j < (t->line - i - 1); ++j)
            put(' ');
        for (j = 0; j < t->tab[i]; ++j)
            put('|');
        for (j = 0; j < ((i * 2 + 1) - t->tab[i]);++j)
            put(' ');
        for (j = 0; j < (t->line - i - 1); ++j)
            put(' ');
        write(1, "*\n", 2);
    }
    for (i = 0; i < ((2 * t->line) + 1); ++i)
        put('*');
    my_putstr("\n");
}

int game(z_s *t)
{
    int i = 0;

    init(t);
    while (i != 84 && t->z != 100 && t->v != 2 && t->d != 1) {
        i = player_play(t);
        if (i != 84 && t->z == 10 && t->v != 2 && t->d != 1) {
            my_printf("\nAI's turn...\n");
            i = ai_play(t);
        }
    }
    if (t->d == 1) {
        t->v = 1;
        my_printf("I lost... snif... but I'll get you next time!!\n");
    }
    return (i);
}

int     main(int ac, char **av)
{
    z_s t;

    t.av = av;
    srand(time(NULL));
    t.i = 2;
    if (ac != 3)
        return (84);
    else {
        t.line = my_getnbr(av[1]);
        t.match = my_getnbr(av[2]);
        if (t.line <= 1 || t.line >= 100)
            return (84);
        game(&t);
        return (t.v);
    }
}
