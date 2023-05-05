/*
** EPITECH PROJECT, 2022
** my strdup
** File description:
** function that allocates memory
*/
#include <stdlib.h>
int my_strlen(char const *str);
char *my_strcpy(char *dest, char const *str);

char *my_strdup(char const *src)
{
    char *dest;
    dest = malloc(sizeof(char) * (my_strlen(src) + 1));
    return (my_strcpy(dest, src));
}
