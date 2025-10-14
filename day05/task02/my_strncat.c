#include "my_strncat.h"

//Write a function that concatenates n characters of the src string to the end of the dest string. It must be prototyped the following way: char * my_strncat ( char * dest , char const * src , int nb ) ;

char *my_strncat(char *dest, char const *src, int nb)
{
	int i = 0;
	int dest_length = 0;

	while(dest[dest_length] != '\0')
	{
		dest_length++;
	}

	while(i < nb && src[i] != '\0')
	{
		dest[dest_length + i] = src[i];
		i++;
	}

	dest[dest_length + i] = '\0';

	return dest;
}
