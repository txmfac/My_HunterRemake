/*
** EPITECH PROJECT, 2022
** my_int in string
** File description:
** function that convert int in string
*/

#include <stdio.h>
#include <stdlib.h>

int digits(int d)
{
    int count = 0;
    if (d < 0)
        count++;
    if (d == 0) {
        return 1;
    }
    while (d != 0) {
        d = d / 10;
        count++;
    }
    return count;
}

int reverse(int n)
{
    int i = 0;

    while (n != 0) {
        i = i * 10;
        i = i + n % 10;
        n = n / 10;
    }
    return (i);
}

char *modulo(int n, char *str, int i)
{
    int nDigits = digits(n);
    int x = nDigits;
    int rev = reverse(n);
    while (x > 0) {
        int e = rev % 10;
        rev = (rev - e) / 10;
        str[i] = e + '0';
        i++;
        x--;
    }
    return str;
}

char *my_convert_int_string(int num)
{
    char *number = malloc(sizeof(char) * (digits(num) + 1));
    number[digits(num)] = '\0';
    int i = 0;
    if (num < 0) {
        number[0] = '-';
        num *= -1;
        i = 1;
    }
    number = modulo(num, number, i);
    return number;
}
