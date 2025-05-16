#include "game.h"

void    ft_move(char key, struct Object *Racket)
{
    if (key == 'a')
        Racket->x--;
    if (key == 'd')
        Racket->x++;
    if (Racket->x <= 0)
        Racket->x = 1;
    if (Racket->x >= width - Racket->w)
        Racket->x = width - Racket->w - 1;
}
