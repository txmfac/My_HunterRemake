/*
** EPITECH PROJECT, 2022
** struct.h
** File description:
** file with my_struct
*/

#include "my.h"

#ifndef MY_STRUCT
    #define MY_STRUCT

    typedef struct PARAMETER {
        sfVideoMode mode;
        sfEvent event;
    } STRUCT_P;

    typedef struct BACKGROUND {
        sfTexture *texture;
        sfSprite *sprite;
    } STRUCT_B;

    typedef struct IMAGE {
        sfTexture *texture;
        sfSprite *sprite;
        sfVector2f scale;
        sfVector2f pos;
        sfVector2f pos2;
        sfVector2f pos3;
        sfIntRect rect;
        float x;
        float y;
        float speed;
        int score;
        int is_destroy;
        float speed_expo;
        int ammu;
    } STRUCT_I;

    typedef struct TIME {
        sfClock *clock;
        sfTime time;
        float seconds;
    } STRUCT_T;

    typedef struct TEXT {
        sfFont* font;
        sfText* text;
        float x;
        float y;
    } STRUCT_TE;

    typedef struct GLOBAL {
        STRUCT_P settings;
        STRUCT_I *sprite;
        STRUCT_T *timer;
        STRUCT_B *background;
        STRUCT_TE text;
    } STRUCT_G;
#endif /* !MY_STRUCT */
