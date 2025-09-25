#include <stdio.h>
#include "my_put_nbr.h"

// Write a function that displays the number given as a parameter. It must be able to display all the possible values of an int, and must be prototyped as follows: int my_put_nbr (int nb ) ;

int my_put_nbr(int nb)
{
	printf("%d", nb);

	printf("\n");
	return 0;
}
