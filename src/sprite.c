/*
** EPITECH PROJECT, 2022
** sprite.c
** File description:
** functions for sprite
*/

#include "my.h"

void animation(STRUCT_G *ALL)
{
    sfTime time;
    float seconds;
    time = sfClock_getElapsedTime(TIME[0].clock);
    seconds = time.microseconds / 1000000.0;
    if (seconds > 0.5) {
        IMG[0].rect.left += 192;
        if (IMG[0].rect.left == 384 && IMG[0].rect.top == 0) {
            IMG[0].rect.top = 192;
            IMG[0].rect.left = 0;
        } if (IMG[0].rect.left == 192 && IMG[0].rect.top == 192) {
            IMG[0].rect.top = 0;
            IMG[0].rect.left = 0;
        }
        sfClock_restart(TIME[0].clock);
    }
}

void movement_sprite(STRUCT_G *ALL, sfRenderWindow *window)
{
    sfTime time;
    float seconds;
    time = sfClock_getElapsedTime(TIME[1].clock);
    seconds = time.microseconds / 1000000.0;
    sfVector2f mvmnt = {IMG[0].x, IMG[0].y};
    sfVector2f move = {IMG[0].speed, 440};
    if (seconds > 0.01) {
        IMG[0].x -= IMG[0].speed;
        sfClock_restart(TIME[1].clock);
    }
    if (IMG[0].x < -192) {
        IMG[0].y = (rand() % 490) * -1 - 100;
        IMG[0].x = 960;
    }
    sfSprite_setPosition(IMG[0].sprite, mvmnt);
    sfSprite_move(IMG[0].sprite, move);
    sfSprite_setTextureRect(IMG[0].sprite, IMG[0].rect);
    sfRenderWindow_drawSprite(window, IMG[0].sprite, sfFalse);
}
