/*
** EPITECH PROJECT, 2019
** MUL_my_screensaver_2019
** File description:
** square.c
*/

#include "include/my.h"

void make_square(framebuffer *fb, sfml_obj *obj)
{
    sfEvent event;
    circle c = {200, 300, 50, generate_rand_color()};

    while (sfRenderWindow_isOpen(obj->window)) {
        draw_circle(fb, c.x, c.y, c.radius, c.color);
        update_screen(obj, fb);
        close_button(obj, event, fb);
    }
}