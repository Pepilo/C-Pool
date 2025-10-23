#include <unistd.h>

//Write a function that displays either N if the integer passed as parameter is negative or P, if positive or null. It must be prototyped as follows: int my_isneg (int n ) ;

int my_isneg(int n)
{
	if(n < 0)
	{
		write(1, "N\n", 2);
	}
	else
	{
		write(1, "P\n", 2);
	}

	return 0;
}
