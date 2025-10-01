#include <unistd.h>
#include "my_print_comb2.h"

//Write a function that displays, in ascending order, all the different combinations of two two-digit numbers (00 01, 00 02, 00 03, 00 04, 00 05,. . . ,01 99, 02 03, . . . , 98 99). It must be prototyped as follows: int my_print_comb2 ( void ) ;

int my_print_comb2(void)
{
	int section1 = 0, section2 = 0;
	char buf[5] = {0, 0, ' ', 0, 0};

	for(section1 = 0; section1 <= 98;section1++)
	{
		for(section2 = 01; section2 <= 99;section2++)
		{
			buf[0] = '0' + section1/10;
			buf[1] = '0' + section1%10;
			buf[3] = '0' + section2/10;
			buf[4] = '0' + section2%10;
			write(1, buf, 5);
			if(!(section1 == 98 && section2 == 99))
			{
				write(1, ", ", 2);
			}
		}
	}

	write(1, "\n", 2);

	return 0;
}
