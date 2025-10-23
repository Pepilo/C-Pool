#include <unistd.h>

//Write a function that displays, in ascending order, all the different combinations of two two-digit numbers (00 01, 00 02, 00 03, 00 04, 00 05,. . . ,01 99, 02 03, . . . , 98 99). It must be prototyped as follows: int my_print_comb2 ( void ) ;

int my_print_comb2(void)
{
	int i = 0, j = 0;
	char c = 'a';

	for(i = 0; i <= 98; i++)
	{
		for(j = i + 1; j <= 99; j++)
		{
			c = (i / 10) + '0';
			write(1, &c, 1);
			c = (i % 10) + '0';
			write(1, &c, 1);
			write(1, " ", 1);
			c = (j / 10) + '0';
			write(1, &c, 1);
			c = (j % 10) + '0';
			write(1, &c, 1);

			if(!(i == 98 && j == 99))
			{
				write(1, ", ", 2);
			}
		}
	}

	write(1, "\n", 1);

	return 0;
}
