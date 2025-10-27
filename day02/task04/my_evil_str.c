//The goal of this task is to swap each of the string’s characters, two by two. In other words, you will swap the first letter with the last one, the second with the second-to-last and so on. The function should return a pointer to the first character of the reversed string: char * my_evil_str ( char * str ) ;

char *my_evil_str(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while(str[i] != '\0')
	{
		i++;
	}

	char temp_str[i];

	for(j = 0; j < i; j++)
	{
		temp_str[j] = str[j];
	}

	while(k < i)
	{
		str[k] = temp_str[i-(k+1)];
		k++;
	}

	return str;
}
