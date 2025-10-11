#include "my_str_isnum.h"

//Write a function that returns 1 if the string passed as parameter only contains digits and 0 otherwise. It must be prototyped the following way: int my_str_isnum ( char const * str ) ;

int my_str_isnum(char const *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		if(!(str[i] >= 48 && str[i] <= 57))
		{
			return 0;
		}

		i++;
	}

	return 1;
}
