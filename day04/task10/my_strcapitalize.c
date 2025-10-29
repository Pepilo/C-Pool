//Write a function that capitalizes the first letter of each word. It must be prototyped the following way: char * my_strcapitalize ( char * str ) ;

char *my_strcapitalize(char *str)
{
	int i = 0;

	if(str[i] >= 97 && str[i] <= 122)
	{
		str[i] = str[i] - 32;
	}

	i++;

	while(str[i] != '\0')
	{
		if(str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}

		if(!(str[i - 1] >= 65 && str[i - 1] <= 90) &&
		   !(str[i - 1] >= 97 && str[i - 1] <= 122) &&
		   !(str[i - 1] >= 48 && str[i - 1] <= 57) &&
		   (str[i] >= 97 && str[i] <= 122))
		{
			str[i] = str[i] - 32;
		}

		i++;
	}

	return str;
}
