#include <unistd.h>

//Write a function that, beginning with a, displays the lowercase alphabet in ascending order, on a single line. It must be prototyped as follows: int my_print_alpha ( void ) ;

int my_print_alpha(void)
{
	char c = 'a';

	for(c = 'a'; c <= 'z'; c++)
	{
		write(1, &c, 1);
	}

	write(1, "\n", 1);

	return 0;
}
