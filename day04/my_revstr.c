#include "my_revstr.h"

//Write a function that reverses a string. It must be prototyped the following way: char * my_revstr ( char * str ) ;

char *my_revstr(char *str)
{
	int i = 0;
	int j = 0;
	char tmp = '0';

	while(str[j] != '\0')
	{
		j++;
	}

	j--;

	while(i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;

		i++;
		j--;
	}

	return str;
}
