#include <stdio.h>

#include "chess.c"


void frame_draw () 
{
	home;
//            123456789012345678901
	puts(	"┌─────────┐┌─────────┐\n" //0
			"│         ││         │\n" //1
			"│         ││         │\n" //2
			"│         ││         │\n" //3
			"│         │├─────────┤\n" //4
			"│         ││         │\n" //5
			"│         ││         │\n" //6
			"│         ││         │\n" //7
			"│         ││         │\n" //8
			"└─────────┘└─────────┘\n" //9
			"┌────────────────────┐\n" //10
			"│                    │\n" //11
			"└────────────────────┘");  //12
	resetcolor;
}


int main(void)
{
	printf("%s", l_down_right);
	printf("%s\n", l_horizontal);
	printf("%s\n", l_vertical);

    return 0;
}