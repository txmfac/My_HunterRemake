/*
** EPITECH PROJECT, 2022
** display.c
** File description:
** display functions
*/

#include"my.h"

void display_ammunation(STRUCT_G *ALL, sfRenderWindow *window)
{
    if (IMG[0].ammu == 3) {
        sfSprite_setPosition(IMG[1].sprite, IMG[1].pos);
        sfRenderWindow_drawSprite(window, IMG[1].sprite, sfFalse);
        sfSprite_setPosition(IMG[1].sprite, IMG[1].pos2);
        sfRenderWindow_drawSprite(window, IMG[1].sprite, sfFalse);
        sfSprite_setPosition(IMG[1].sprite, IMG[1].pos3);
        sfRenderWindow_drawSprite(window, IMG[1].sprite, sfFalse);
    } if (IMG[0].ammu == 2) {
        sfSprite_setPosition(IMG[1].sprite, IMG[1].pos2);
        sfRenderWindow_drawSprite(window, IMG[1].sprite, sfFalse);
        sfSprite_setPosition(IMG[1].sprite, IMG[1].pos3);
        sfRenderWindow_drawSprite(window, IMG[1].sprite, sfFalse);
    } if (IMG[0].ammu == 1) {
        sfSprite_setPosition(IMG[1].sprite, IMG[1].pos3);
        sfRenderWindow_drawSprite(window, IMG[1].sprite, sfFalse);
    }
}

void display_crosshair(STRUCT_G *ALL, sfRenderWindow *window)
{
    sfVector2i mousePos = sfMouse_getPositionRenderWindow(window);
    float x = mousePos.x - 40, y = mousePos.y - 40;
    sfVector2f pos = {x, y};
    sfSprite_setPosition(IMG[2].sprite, pos);
    sfRenderWindow_drawSprite(window, IMG[2].sprite, sfFalse);
}

void display_score(STRUCT_G *ALL, sfRenderWindow *window)
{
    sfVector2f pos = {TEXT.x, TEXT.y};
    sfText_setPosition(TEXT.text, pos);
    sfText_setString(TEXT.text, "Score : ");
    sfText_setFont(TEXT.text, TEXT.font);
    sfText_setCharacterSize(TEXT.text, 30);
    sfRenderWindow_drawText(window, TEXT.text, NULL);
    char *str = my_convert_int_string(IMG[0].score);
    sfVector2f pos2 = {TEXT.x + 90, TEXT.y};
    sfText_setString(TEXT.text, str);
    sfText_setPosition(TEXT.text, pos2);
    sfText_setFont(TEXT.text, TEXT.font);
    sfText_setCharacterSize(TEXT.text, 30);
    sfRenderWindow_drawText(window, TEXT.text, NULL);
}
