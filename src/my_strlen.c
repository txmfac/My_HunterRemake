/*
** EPITECH PROJECT, 2022
** my strlen
** File description:
** function that counts and returns the number of characters found in the string
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }

    return (i);
}
