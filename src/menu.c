/*
** EPITECH PROJECT, 2022
** menu.c
** File description:
** functions.c
*/

#include "my.h"

void is_quit_pressed(STRUCT_G *ALL, sfRenderWindow *window)
{
    sfVector2i mousePos = sfMouse_getPositionRenderWindow(window);
    float x = mousePos.x, y = mousePos.y;
    if (IMG[5].pos.x < x && x < IMG[5].pos.x + 200
        && IMG[5].pos.y < y && y < IMG[5].pos.y + 200) {
        sfRenderWindow_close(window);
    }
}

void analyse_menu(STRUCT_G *ALL, sfRenderWindow *window)
{
    if (EVENT.type == sfEvtClosed)
        sfRenderWindow_close(window);
    if (EVENT.type == sfEvtMouseButtonPressed) {
        is_play_pressed(ALL, window);
        is_quit_pressed(ALL, window);
    }
}

void menu(STRUCT_G *ALL)
{
    sfRenderWindow *window;
    window = sfRenderWindow_create(MODE, "My hunter", sfClose, NULL);
    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &EVENT)) {
            analyse_menu(ALL, window);
        }
        sfRenderWindow_display(window);
        sfRenderWindow_drawSprite(window, IMG[3].sprite, NULL);
        sfRenderWindow_drawSprite(window, IMG[4].sprite, NULL);
        sfRenderWindow_drawSprite(window, IMG[5].sprite, NULL);
    }
}
