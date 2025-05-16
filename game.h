#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>

#define width 118
#define heigh   30


char canvas[heigh][width + 1];

struct  Object
{
    int x;
    int y;
    int w;
} Ball, Racket;

void    ft_canvas(struct Object *Racket, struct Object *Ball);
void    ft_draw();
void    ft_move(char c, struct Object *Racket);
void    setcur(int x, int y);
void    ft_ball(struct Object *Racket, struct Object *Ball);

#endif
