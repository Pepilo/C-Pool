#include <unistd.h>

//Write a function that displays all the digits, on a single line, in ascending order. It must be prototyped as follows: int my_print_digits ( void ) ;

int my_print_digits(void)
{
	char c = '0';
	int i = 0;

	for(i = 0; i < 10; i++)
	{
		c = i + '0';
		write(1, &c, 1);
	}

	write(1, "\n", 1);

	return 0;
}
