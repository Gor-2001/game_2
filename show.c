#include "game.h"

void    ft_canvas(struct Object *Racket, struct Object *Ball)
{
    int i;
    int j;

    i = 0;
    while (i < heigh)
    {
        j = 0;
        while (j < width)
        {
            if (j == 0 || j == width - 1 || i == 0)
                canvas[i][j] = '#';
            else
                canvas[i][j] = ' ';
            j++;
        }
        canvas[i][j] = '\0';
        i++;
    }
    i = 0;
    canvas[Ball->y][Ball->x] = '*';
    while (i < Racket->w)
        canvas[Racket->y - 1][Racket->x + i++] = '@';
}

void ft_draw()
{
    int i;

    i = 0;
    while (i < heigh - 1)
        printf ("%s\n", canvas[i++]);
    printf ("%s", canvas[i]);
}

void setcur(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition (GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
