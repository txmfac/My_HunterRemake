/*
** EPITECH PROJECT, 2022
** event.c
** File description:
** event functions
*/

#include "my.h"

void event_win(STRUCT_G *ALL, sfRenderWindow *window)
{
    while (sfRenderWindow_pollEvent(window, &EVENT)) {
        analyse_events(ALL, window);
    }
}

void is_shooted(STRUCT_G *ALL, sfRenderWindow *window)
{
    sfVector2i mousePos = sfMouse_getPositionRenderWindow(window);
    float x = mousePos.x, y = mousePos.y;
    sfVector2f position = sfSprite_getPosition(IMG[0].sprite);
    if ((POS.x <= x && x <= (POS.x + 140))
        && (POS.y <= y && y <= (POS.y + 140))) {
        IMG[0].y = (rand() % 490) * -1 - 100;
        IMG[0].x = 960;
        IMG[0].speed = rand() % 3 + 3;
        IMG[0].score += 1;
        if (IMG[0].score % 3 == 0)
            IMG[0].speed += 3;
        if (IMG[0].score % 5 == 0)
            IMG[0].speed += 5;
        IMG[0].speed += IMG[0].speed_expo;
        IMG[0].speed_expo += 0.08;
    } else
        IMG[0].ammu -= 1;
}

void analyse_events(STRUCT_G *ALL, sfRenderWindow *window)
{
    if (ALL->settings.event.type == sfEvtClosed || IMG[0].ammu == 0) {
        sfRenderWindow_close(window);
    }
    if (EVENT.type == sfEvtMouseButtonPressed) {
        is_shooted(ALL, window);
    }
}

void is_play_pressed(STRUCT_G *ALL, sfRenderWindow *window)
{
    sfVector2i mousePos = sfMouse_getPositionRenderWindow(window);
    float x = mousePos.x, y = mousePos.y;
    if (IMG[4].pos.x < x && x < IMG[4].pos.x + 200
        && IMG[4].pos.y < y && y < IMG[4].pos.y + 200) {
        sfRenderWindow_close(window);
        my_hunter(ALL);
    }
}
