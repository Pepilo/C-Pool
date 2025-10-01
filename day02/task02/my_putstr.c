#include <unistd.h>
#include "my_putstr.h"

//Write a function that displays, one-by-one, the characters of a string. The address of the string’s first character will be found in the pointer passed as a parameter to the function, which must be prototyped as follows: int my_putstr ( char const * str ) ;

int my_putstr(char const *str)
{
	int i = 0;

	while(str[i] != '\0')
	{

		write(1, &str[i], 1);
		i++;
	}

	write(1, "\n", 1);

	return 0;
}
