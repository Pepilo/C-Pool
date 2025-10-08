#include "my_strncmp.h"

//Reproduce the behavior of the strncmp function. Your function must be prototyped the following way: int my_strncmp ( char const * s1 , char const * s2 , int n ) ;

int my_strncmp(char const *s1, char const *s2, int n)
{
	int i = 0;

	while(s1[i] == s2[i] && s1[i] != '\0' && i < n)
	{
		i++;
	}

	if(i == n)
	{
		return 0;
	}

	return (s1[i] - s2[i]);
}
