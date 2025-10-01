#include "my_strlen.h"

//Write a function that counts and returns the number of characters found in the string passed as parameter. It must be prototyped as follows: int my_strlen ( char const * str ) ;

int my_strlen(char const *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		i++;
	}

	return i;
}
