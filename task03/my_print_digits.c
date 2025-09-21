#include <stdio.h>
#include "my_print_digits.h"

//Write a function that displays all the digits, on a single line, in ascending order. It must be prototyped as follows: int my_print_digits ( void ) ;

int my_print_digits(void)
{
	int i = 0;

	for(i = 0; i < 10;i++)
	{
		printf("%d", i);
	}

	printf("\n");

	return 0;
}

