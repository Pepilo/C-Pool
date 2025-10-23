#include <unistd.h>

//Write a function that displays, in ascending order, all the numbers composed by three different digits num␂bers (012, 013, 014, 015, 016, 017, 018, 019, 023, . . . , 789). Given three digits (all different), only the smallest number composed by those digits must be displayed. It must be prototyped as follows: int my_print_comb ( void ) ;

int my_print_comb(void)
{
	int i = 0, j = 0, k = 0;
	char c = 'a';

	for(i = 0;i <= 7; i++)
	{
		for(j = i+1;j <= 8; j++)
		{
			for(k = j+1;k <= 9; k++)
			{
				c = i + '0';
				write(1, &c, 1);
				c = j + '0';
				write(1, &c, 1);
				c = k + '0';
				write(1, &c, 1);

				if(!(i == 7 && j == 8 && k == 9))
				{
					write(1, ", ", 2);
				}
			}
		}
	}

	write(1, "\n", 1);

	return 0;
}
