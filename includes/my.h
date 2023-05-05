/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** prototypes
*/

#ifndef MY_H
    #define MY_H
    #include <SFML/Graphics.h>
    #include <SFML/Audio.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include "struct.h"
    void animation(STRUCT_G *ALL);
    void set_texture_bg(STRUCT_G *ALL);
    void event_win(STRUCT_G *ALL);
    void movement_sprite(STRUCT_G *ALL);

    #define WINDOW ALL->settings.window
    #define MODE ALL->settings.mode
    #define EVENT ALL->settings.event
    #define IMG ALL->sprite
    #define TIME ALL->timer
    #define CONSTWIN const sfRenderWindow *window
#endif /* !MY_H */
