#include "stdio.h"
#include "stdlib.h"

#include "includes/tic_tac_toe.h"

const short WIDTH = 2;
const short HEIGHT = 2;

void __mid_vert(int j)
{
    for (int i = 1; i < 17; i += 4)
    {
        goto(i, j);
        printf(l_vertical);
    }
}

void __mid_mid()
{
    printf(l_vertical_right);

    for (int i = 0; i < WIDTH; ++i)
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
	for (int i = 0; i < WIDTH; ++i)
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
    
    for (short k = 0, i = 2, j = 3; k < WIDTH; k += 1, i += 2, j += 2)
    {
        __mid_vert(i);
        goto(1, j);
        __mid_mid();
    }
    goto(1, 6);
    __mid_vert(6);

    goto(1, 7);
    printf(l_up_right);
	for (int i = 0; i < 2; ++i)
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

    home;
}

void redraw_board(struct Board* board)
{
    draw_board();
    for (int k = 0, i = 3; i < 15; i += 4)
    {
        for (int j = 2; j < 8; j += 2)
        {
            goto(i, j);
            printf("%c", board->board[k]);
            ++k;
        }
    }
    home;
}

short is_valid(char* str)
{
    int len = sizeof(str) / sizeof(char);
    // printf("size of str: %d\n", len);
    if (len != 8)
    {
        // printf("len error\n");
        return 0;
    }
    if (str[0] < 48 && str[0] > 57)
    {
        // printf("str[0] error\n");
        return 0;
    }
    if (str[1] != 'X' && str[1] != 'O')
    {
        // printf("str[1] error\n");
        return 0;
    }
    return 1;
}

void take_input(struct Board* board)
{
    char* input = malloc(2 * sizeof(char));
    scanf("%c %c", &input[0], &input[1]);

    short valid = is_valid(input);
    /*if (valid)
        printf("%d", valid);
    else
        printf("not valid");*/
    
    while(!valid)
    {
        scanf("%c %c", &input[0], &input[1]);
        valid = is_valid(input);
    }

    board->board[input[0]] = input[1];
    free(input);
}

/*
Board's cells coordinates:
(3, 2) (7, 2) (11, 2)
(3, 4) (7, 4) (11, 4)
(3, 6) (7, 6) (11, 6)
*/

void game()
{
    struct Board* b = malloc(sizeof(struct Board));
    
    short win = 0;
    /*while (!win)
    {
        take_input(b);
        redraw_board(b);
    }*/

   take_input(b);
   // redraw_board(b);

    goto(1, 12); 
    free(b); 
}