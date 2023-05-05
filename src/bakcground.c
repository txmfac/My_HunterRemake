/*
** EPITECH PROJECT, 2022
** background.c
** File description:
** bakcground functions
*/

#include "my.h"

void set_texture_bg(STRUCT_G *ALL, sfRenderWindow *window)
{
    sfRenderWindow_display(window);
    sfRenderWindow_drawSprite(window, BG->sprite, sfFalse);
    event_win(ALL, window);
}
