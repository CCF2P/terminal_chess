// White figures
#define king_w   "\u265A"
#define queen_w  "\u265B"
#define rook_w   "\u265C"
#define bishop_w "\u265D"
#define knight_w "\u265E"
#define pawn_w   "\u265F"

// Black figures
#define king_b   "\u2654"
#define queen_b  "\u2655"
#define rook_b   "\u2656"
#define bishop_b "\u2657"
#define knight_b "\u2658"
#define pawn_b   "\u2659"

// Board box
#define l_horizontal           "\u2500"
#define l_vertical             "\u2502"
#define l_down_right           "\u250C"
#define l_down_left            "\u2510"
#define l_up_right             "\u2514"
#define l_up_left              "\u2518"
#define l_vertical_right       "\u251C"
#define l_vertical_left        "\u2524"
#define l_horizontal_down      "\u252C"
#define l_horizontal_up        "\u2534"
#define l_verctical_horizontal "\u253C"

// ESC commands
#define home                     printf("\033[H")
#define cls                      printf("\x1b[2J")
#define goto(x,y)	             printf("\e[%d;%dH", y, x)
#define visible_cursor           printf("\e[?251")
#define resetcolor               printf("\e[0m")
#define set_display_atrib(color) printf("\e[%dm",color)

//Background Colours
#define B_BLACK 	40
#define B_RED		41
#define B_GREEN		42
#define B_YELLOW	44
#define B_BLUE		44
#define B_MAGENTA 	45
#define B_CYAN		46
#define B_WHITE		47