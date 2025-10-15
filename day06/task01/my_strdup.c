#include "my_strdup.h"
#include <stdlib.h>

//Write a function that allocates memory and copies the string given as argument in it. It must be prototyped as follows: char * my_strdup ( char const * src ) 

char *my_strdup(char const *src)
{
	int i = 0;
	int src_length = 0;
	char *str = NULL;

	if(src == NULL)
	{
		return NULL;
	}

	while(src[src_length] != '\0')
	{
		src_length++;
	}

	str = malloc(sizeof(char) * src_length + 1);
	if(str == NULL)
	return NULL;

	for(i = 0; i <= src_length; i++)
	{
		str[i] = src[i];
	}

	return str;
}
