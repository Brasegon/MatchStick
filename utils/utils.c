/*
** EPITECH PROJECT, 2018
** utils
** File description:
** brandon Segers
*/
#include <unistd.h>

int my_strlen(char *str)
{
    int i = 0;

    while (str[i++]);
    return (i);
}

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char *str)
{
    int i = 0;

    while (str[i]) {
        my_putchar(str[i]);
        i++;
    }
}
