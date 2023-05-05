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
    void set_texture_bg(STRUCT_G *ALL, sfRenderWindow *window);
    void event_win(STRUCT_G *ALL, sfRenderWindow *window);
    void movement_sprite(STRUCT_G *ALL, sfRenderWindow *window);
    void set_timer(STRUCT_G *ALL);
    void init_timer(STRUCT_G *ALL);
    void init(STRUCT_G *ALL);
    int my_strcmp(char *str1, char *str2);
    int my_putstr(char const *str);
    char *my_convert_int_string(int num);
    void analyse_events(STRUCT_G *ALL, sfRenderWindow *window);
    void init_menu(STRUCT_G *ALL);
    void init_ammu(STRUCT_G *ALL);
    void init_crosshair(STRUCT_G *ALL);
    void init_text(STRUCT_G *ALL);
    void is_quit_pressed(STRUCT_G *ALL, sfRenderWindow *window);
    void analyse_menu(STRUCT_G *ALL, sfRenderWindow *window);
    void menu(STRUCT_G *ALL);
    void display_ammunation(STRUCT_G *ALL, sfRenderWindow *window);
    void display_crosshair(STRUCT_G *ALL, sfRenderWindow *window);
    void display_score(STRUCT_G *ALL, sfRenderWindow *window);
    void is_play_pressed(STRUCT_G *ALL, sfRenderWindow *window);
    void analyse_events(STRUCT_G *ALL, sfRenderWindow *window);
    void is_shooted(STRUCT_G *ALL, sfRenderWindow *window);
    void event_win(STRUCT_G *ALL, sfRenderWindow *window);
    void destroy(STRUCT_G *ALL);
    void my_hunter(STRUCT_G *ALL);

    #define WINDOW ALL->settings.window
    #define MODE ALL->settings.mode
    #define EVENT ALL->settings.event
    #define IMG ALL->sprite

    #define TIME ALL->timer
    #define BG ALL->background
    #define POS position
    #define TEXT ALL->text
    #define CONSTWIN const sfRenderWindow *window
#endif /* !MY_H */
