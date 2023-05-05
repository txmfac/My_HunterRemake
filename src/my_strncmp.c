/*
** EPITECH PROJECT, 2022
** my strncmp
** File description:
** strncmp function
*/

char *my_strdup(char const *str);

int is_num(char c)
{
    if (('A' < c && c < 'Z') || ('a' < c && c < 'z'))
        return 1;
    return -1;
}

int is_upper(char c)
{
    if ('A' < c && c < 'Z')
        return 1;
    return -1;
}

int condition(char *str1_temp, char *str2_temp, int i)
{
    if (str1_temp[i] < str2_temp[i])
        return -1;
    else if (str1_temp[i] > str2_temp[i])
        return 1;
    else
        return 0;
}

char *all_lower(char *str)
{
    int i = 0;
    char *str_temp = my_strdup(str);
    while (str_temp[i] != '\0') {
        if (is_upper(str_temp[i]) == 1)
            str_temp[i] += 32;
        i++;
    }
    return str_temp;
}

int my_strcmp(char *str1, char *str2)
{
    int i;
    char *str1_temp = all_lower(str1);
    char *str2_temp = all_lower(str2);
    for (i = 0; str1_temp[i] == str2_temp[i] && str1_temp[i] != '\0'; i++);
    return condition(str1_temp, str2_temp, i);
}
