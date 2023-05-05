/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main prog
*/

#include "my.h"

void destroy(STRUCT_G *ALL)
{
    sfSprite_destroy(BG->sprite);
    sfTexture_destroy(BG->texture);
    sfText_destroy(TEXT.text);
    sfFont_destroy(TEXT.font);
    sfSprite_destroy(IMG[0].sprite);
    sfTexture_destroy(IMG[0].texture);
    sfSprite_destroy(IMG[1].sprite);
    sfTexture_destroy(IMG[1].texture);
    sfClock_destroy(TIME[0].clock);
    sfSprite_destroy(IMG[2].sprite);
    sfTexture_destroy(IMG[2].texture);
    sfSprite_destroy(IMG[3].sprite);
    sfTexture_destroy(IMG[3].texture);
    sfSprite_destroy(IMG[4].sprite);
    sfTexture_destroy(IMG[4].texture);
    sfSprite_destroy(IMG[5].sprite);
    sfTexture_destroy(IMG[5].texture);
}

void my_hunter(STRUCT_G *ALL)
{
    sfRenderWindow *window;
    window = sfRenderWindow_create(MODE, "my_hunter", sfClose, NULL);
    sfRenderWindow_setMouseCursorVisible(window, sfFalse);
    while (sfRenderWindow_isOpen(window)) {
        set_texture_bg(ALL, window);
        animation(ALL);
        display_score(ALL, window);
        display_ammunation(ALL, window);
        display_crosshair(ALL, window);
        movement_sprite(ALL, window);
    }
    sfRenderWindow_destroy(window);
}

void tiret_h(void)
{
    my_putstr("This program is a remake of Duck Hunt\n");
    my_putstr("This game is on a endless mode :\n");
    my_putstr("\nIn this game you play as a ghost hunter\n");
    my_putstr("and you must make the best score\n");
    my_putstr("You must catch the ghosts but be careful,\n");
    my_putstr("because you have only three chances !\n");
    my_putstr("\nGood luck !\n");
}

int main(int ac, char **av)
{
    if (ac == 2 && my_strcmp(av[1], "-h") == 0) {
        tiret_h();
        return 0;
    }
    STRUCT_G ALL;
    init(&ALL);
    menu(&ALL);
    return 0;
}
