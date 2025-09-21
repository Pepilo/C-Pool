#include <stdio.h>
#include "my_isneg.h"

//Write a function that displays either N if the integer passed as parameter is negative or P, if positive or null. It must be prototyped as follows: int my_isneg (int n ) ;

int my_isneg(int n)
{
	if(n < 0)
	{
		printf("N\n");
	}
	else
	{
		printf("P\n");
	}

	return 0;
}
