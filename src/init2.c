/*
** EPITECH PROJECT, 2022
** init2.c
** File description:
** second file of init functions
*/

#include "my.h"

void init_menu(STRUCT_G *ALL)
{
    ALL->sprite[3].texture = sfTexture_createFromFile("assets/menu.jpg", NULL);
    ALL->sprite[3].sprite = sfSprite_create();
    IMG[4].texture = sfTexture_createFromFile("assets/buttonplay.png", NULL);
    ALL->sprite[4].sprite = sfSprite_create();
    ALL->sprite[4].pos.x = 650;
    ALL->sprite[4].pos.y = 100;
    ALL->sprite[5].texture = sfTexture_createFromFile("assets/quit.png", NULL);
    ALL->sprite[5].sprite = sfSprite_create();
    ALL->sprite[5].pos.x = 650;
    ALL->sprite[5].pos.y = 250;
    sfVector2f scale = {0.8, 0.8};
    sfSprite_setScale(ALL->sprite[4].sprite, scale);
    sfSprite_setScale(ALL->sprite[5].sprite, scale);
    sfSprite_setPosition(ALL->sprite[4].sprite, ALL->sprite[4].pos);
    sfSprite_setPosition(ALL->sprite[5].sprite, ALL->sprite[5].pos);
    sfSprite_setTexture(ALL->sprite[3].sprite, ALL->sprite[3].texture, sfTrue);
    sfSprite_setTexture(ALL->sprite[4].sprite, ALL->sprite[4].texture, sfTrue);
    sfSprite_setTexture(ALL->sprite[5].sprite, ALL->sprite[5].texture, sfTrue);
}

void init_ammu(STRUCT_G *ALL)
{
    ALL->sprite[1].texture = sfTexture_createFromFile("assets/ammu.png", NULL);
    ALL->sprite[1].sprite = sfSprite_create();

    ALL->sprite[1].x = 900;
    ALL->sprite[1].y = 10;
    ALL->sprite[1].scale.x = 0.3;
    ALL->sprite[1].scale.y = 0.3;
    IMG[1].pos.x = 850;
    IMG[1].pos.y = 5;
    IMG[1].pos2.x = 870;
    IMG[1].pos2.y = 5;
    IMG[1].pos3.x = 890;
    IMG[1].pos3.y = 5;
    sfSprite_setScale(ALL->sprite[1].sprite, ALL->sprite[1].scale);
    sfSprite_setTexture(ALL->sprite[1].sprite, ALL->sprite[1].texture, sfTrue);
}

void init_crosshair(STRUCT_G *ALL)
{
    IMG[2].texture = sfTexture_createFromFile("assets/crosshair.png", NULL);
    ALL->sprite[2].sprite = sfSprite_create();
    ALL->sprite[2].scale.x = 1.5;
    ALL->sprite[2].scale.y = 1.5;
    sfSprite_setScale(ALL->sprite[2].sprite, ALL->sprite[2].scale);
    sfSprite_setTexture(ALL->sprite[2].sprite, ALL->sprite[2].texture, sfTrue);
}

void init_text(STRUCT_G *ALL)
{
    TEXT.font = sfFont_createFromFile("assets/fortnite.ttf");
    TEXT.text = sfText_create();
    TEXT.x = 10;
    TEXT.y = 10;
}
