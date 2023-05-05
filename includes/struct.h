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
        sfRenderWindow *window;
        sfEvent event;
    } STRUCT_P;

    typedef struct IMAGE {
        sfTexture *texture;
        sfSprite *sprite;
        sfVector2f scale;
        sfVector2f pos;
        sfIntRect rect;
        float x;
        float y;
        float speed;
    } STRUCT_I;

    typedef struct TIME {
        sfClock *clock;
        sfTime time;
        float seconds;
    } STRUCT_T;

    typedef struct GLOBAL {
        STRUCT_P settings;
        STRUCT_I *sprite;
        STRUCT_T *timer;
    } STRUCT_G;
#endif /* !MY_STRUCT */
