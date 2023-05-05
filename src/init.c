/*
** EPITECH PROJECT, 2022
** init.c
** File description:
** init functions
*/

#include "my.h"

void init_window(STRUCT_G *ALL)
{
    MODE.bitsPerPixel = 16;
    MODE.height = 540;
    MODE.width = 960;
}

void init_bg(STRUCT_G *ALL)
{
    ALL->background = malloc(sizeof(STRUCT_B) * 1);
    BG->texture = sfTexture_createFromFile("assets/backg.jpg", NULL);
    BG->sprite = sfSprite_create();

    sfSprite_setTexture(BG->sprite, BG->texture, sfTrue);
}

void init_timer(STRUCT_G *ALL)
{
    ALL->timer = malloc(sizeof(STRUCT_T) * 3);
    ALL->timer[0].clock = sfClock_create();
    ALL->timer[1].clock = sfClock_create();
}

void init_sprite(STRUCT_G *ALL)
{
    ALL->sprite = malloc(sizeof(STRUCT_I) * 3);
    ALL->sprite[0].texture = sfTexture_createFromFile("assets/booh.png", NULL);
    ALL->sprite[0].sprite = sfSprite_create();
    ALL->sprite[0].scale.x = 1;
    ALL->sprite[0].scale.y = 1;

    ALL->sprite[0].rect.top = 0;
    ALL->sprite[0].rect.left = 0;
    ALL->sprite[0].rect.width = 192;
    ALL->sprite[0].rect.height = 192;
    ALL->sprite[0].x = 960;
    ALL->sprite[0].y = (rand() % 490) * -1 - 100;
    ALL->sprite[0].speed = rand() % 6 + 3;
    ALL->sprite[0].score = 0;
    ALL->sprite[0].speed_expo = 0.05;
    ALL->sprite[0].ammu = 3;
    sfSprite_setScale(ALL->sprite[0].sprite, ALL->sprite[0].scale);
    sfSprite_setTexture(ALL->sprite[0].sprite, ALL->sprite[0].texture, sfTrue);
}

void init(STRUCT_G *ALL)
{
    init_window(ALL);
    init_bg(ALL);
    init_sprite(ALL);
    init_menu(ALL);
    init_ammu(ALL);
    init_crosshair(ALL);
    init_timer(ALL);
    init_text(ALL);
}
