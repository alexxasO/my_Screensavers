/*
** EPITECH PROJECT, 2019
** MUL_my_screensaver_2019
** File description:
** screen_launcher.c
*/

#include "include/my.h"

static void display_usage(void)
{
    my_putstr("wow");
}

void screen_chooser(char *id, framebuffer *fb, sfml_obj *obj)
{
    char nb = id[0] - '0';

    if (my_strcmp(id, "-h") == 0)
        display_usage();
    if (nb == 1)
        draw_kepler(fb, obj);
    if (nb == 2)
        draw_mess(fb, obj);
    if (nb == 3)
        dvd_f(fb, obj);
    if (nb == 4)
        line_tracer(fb, obj);
}