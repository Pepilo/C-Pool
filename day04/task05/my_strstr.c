//Reproduce the behavior of the strstr function. Your function must be prototyped the following way: char * my_strstr ( char * str , char const * to_find ) ;

char *my_strstr(char *str, char const *to_find)
{
	int i =0;
	int j = 0;

	if(to_find[0] == '\0')
	{
		return str;
	}

	while(str[i] != '\0')
	{
		j = 0;

		while(str[i + j] == to_find[j] && to_find[j] != '\0')
		{
			j++;
		}

		if(to_find[j] == '\0')
		{
			return &str[i];
		}

		i++;
	}

	return 0;
}
