//Write a function that returns 1 if the string passed as parameter only contains alphabetical characters and 0 if the string contains another type of character. It must be prototyped the following way: int my_str_isalpha ( char const * str ) ;

int my_str_isalpha(char const *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		if(!((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)))
		{
			return 0;
		}

		i++;
	}

	return 1;
}
