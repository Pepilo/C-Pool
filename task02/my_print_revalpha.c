#include <stdio.h>
#include "my_print_revalpha.h"

//Write a function that, beginning with z, displays the lowercase alphabet in descending order, on a single line. It must be prototyped as follows: int my_print_revalpha ( void ) ;

int my_print_revalpha(void)
{
	char c = 'z';

	for(c = 'z';c >= 'a';c--)
	{
		printf("%c", c);
	}

	printf("\n");

	return  0;
}
