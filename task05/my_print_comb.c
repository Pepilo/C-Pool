#include <stdio.h>
#include "my_print_comb.h"

//Write a function that displays, in ascending order, all the numbers composed by three different digits num␂bers (012, 013, 014, 015, 016, 017, 018, 019, 023, . . . , 789). Given three digits (all different), only the smallest number composed by those digits must be displayed. It must be prototyped as follows: int my_print_comb ( void ) ;

int my_print_comb(void)
{
	int i = 0, j = 0, k = 0;

	for(i = 0;i <= 7; i++)
	{
		for(j = i+1;j <= 8; j++)
		{
			for(k = j+1;k <= 9; k++)
			{
				printf("%d%d%d", i, j, k);
				if(!(i == 7 && j == 8 && k == 9))
				{
					printf(", ");
				}
			}
		}
	}

	printf("\n");

	return 0;
}
