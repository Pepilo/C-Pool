#include "my_strcat.h"

//Write a function that concatenates two strings. It must be prototyped the following way: char * my_strcat ( char * dest , char const * src ) ;

char *my_strcat(char *dest, char const *src)
{
	int i = 0;
	int src_length = 0;
	int dest_length = 0;

	while(src[src_length] != '\0')
	{
		src_length++;
	}

	while(dest[dest_length] != '\0')
	{
		dest_length++;
	}

	for(i = 0; i <= src_length; i++)
	{
		dest[dest_length + i] = src[i];
	}

	return dest;
}
