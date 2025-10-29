//Write a function that copies n characters from a string into another. The destination string will already have enough memory to contain n characters. It must be prototyped the following way: char * my_strncpy ( char * dest , char const * src , int n ) ;

char *my_strncpy(char *dest, char const *src, int n)
{
	int i = 0;

	while(i < n && src[i] != '\0')
	{
		dest[i] = src[i];

		i++;
	}

	while(i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return dest;
}
