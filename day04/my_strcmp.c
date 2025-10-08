#include "my_strcmp.h"

//Reproduce the behavior of the strcmp function. Your function must be prototyped the following way: int my_strcmp ( char const * s1 , char const * s2 ) 

int my_strcmp(char const *s1, char const *s2)
{
	int i = 0;

	while(s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}

	return (s1[i] - s2[i]);
}
