//Write a function that puts every letter of every word in it in uppercase. It must be prototyped the following way: char * my_strupcase ( char * str ) ;

char *my_strupcase(char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		if(str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}

		i++;
	}

	return str;
}
