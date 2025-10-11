#include "my_str_isupper.h"

//Write a function that returns 1 if the string passed as parameter only contains uppercase alphabetical char␂acters and 0 otherwise. It must be prototyped the following way: int my_str_isupper ( char const * str ) ;

int my_str_isupper(char const *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		if(!(str[i] >= 65 && str[i] <= 90))
		{
			return 0;
		}

		i++;
	}

	return 1;
}
