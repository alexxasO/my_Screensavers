/*
** EPITECH PROJECT, 2019
** MUL_my_screensaver_2019
** File description:
** draw_things.c
*/

#include "include/my.h"

void draw_square(framebuffer *fb, int x, int y, sfColor color)
{
    for (int i = x; i < fb->width + x; i++) {
        for (int v = y; v < fb->height + y; v++) {
            set_pixel(fb, i, v, color);
        }
    }
}

void draw_circle(framebuffer *fb, int x, int y, int rayon, sfColor color)
{
    for (int i = 0; i < fb->width; i++) {
        for (int v = 0; v < fb->height; v++) {
            if ((i - x) * (i - x) + (v - y) * (v - y) <= rayon * rayon)
                set_pixel(fb, i, v, color);
        }
    }
}

void draw_line(framebuffer *fb, stCoo coord, stCoo coord2, sfColor color)
{
    float a = (coord2.y - coord.y) / (coord2.x - coord.x);
    float b = coord.y - a * coord.x;
    int step = ABS(coord.y - coord2.y) / MAX(ABS(coord.y - coord2.y),
                ABS(coord.x - coord2.x));

    for (float i = coord.x; ABS(coord2.x - (int)i) > 0; i += step) {
        for (float v = coord.y; ABS(coord2.y - (int)v) > 0; v += step) {
            if (v == a * i + b)
                set_pixel(fb, (int)i, (int)v, color);
            if (i == (v - b) / a)
                set_pixel(fb, (int)i, (int)v, color);
        }
    }
}