#include "game.h"

int main(int argc, char **argv)
{
    Racket.w = width / 15;
    Racket.x = (width - Racket.w + 2) / 2;
    Racket.y = heigh;
    Ball.x = width / 2;
    Ball.y = 1;
    do
    {
        setcur(0, 0);
        ft_ball(&Racket, &Ball);
        ft_canvas(&Racket, &Ball);
        ft_draw();
        if (GetKeyState('A') < 0)
            ft_move('a', &Racket);
        if (GetKeyState('D') < 0)
            ft_move('d', &Racket);
        Sleep(10);
    }
    while (GetKeyState(VK_ESCAPE) >= 0);
    return (0);
}
