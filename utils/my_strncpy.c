/*
** EPITECH PROJECT, 2018
** my_strncpy
** File description:
** Brandon SEGERS
*/

char *my_strncpy(char *dest, char *src, int n, int i)
{
    while (i < n) {
        dest[i] = src[i];
        i = i + 1;
    }
    return (dest);
}
