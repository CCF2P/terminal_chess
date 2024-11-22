#include <stdio.h>

#include "includes/chess.h"

void __mid_vert(int j)
{
    for (int i = 1; i < 37; i += 4)
    {
        goto(i, j);
        printf(l_vertical);
    }
}

void __mid_mid()
{
    printf(l_vertical_right);

    for (int i = 0; i < 7; ++i)
    {
        printf(l_horizontal);
        printf(l_horizontal);
        printf(l_horizontal);
        printf(l_verctical_horizontal);
    }
    printf(l_horizontal);
    printf(l_horizontal);
    printf(l_horizontal);
    printf(l_vertical_left);
}

void draw_board()
{
    home;
    cls;

    printf(l_down_right);
	for (int i = 0; i < 7; ++i)
    {
        printf(l_horizontal);
        printf(l_horizontal);
        printf(l_horizontal);
        printf(l_horizontal_down);
    }
    printf(l_horizontal);
    printf(l_horizontal);
    printf(l_horizontal);
    printf(l_down_left);

    for (short k = 0, i = 2, j = 3; k < 7; ++k, i += 2, j += 2)
    {
        __mid_vert(i);
        goto(1, j);
        __mid_mid();
    }
    goto(1, 16);
    __mid_vert(16);

    goto(1, 17);
    printf(l_up_right);
	for (int i = 0; i < 7; ++i)
    {
        printf(l_horizontal);
        printf(l_horizontal);
        printf(l_horizontal);
        printf(l_horizontal_up);
    }
    printf(l_horizontal);
    printf(l_horizontal);
    printf(l_horizontal);
    printf(l_up_left);
    
    goto(1, 20);
}