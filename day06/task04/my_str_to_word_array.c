#include <stdlib.h>

//Write a function that splits a string into words. Separators will all be non-alphanumeric characters. The function returns an array in which each cell contains the address of a string (representing a word). The last cell must be null to terminate the array. The function must be prototyped as follows: char ** my_str_to_word_array ( char const * str ) ;

char **my_str_to_word_array(char const *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	int word_number = 2;
	char **strReturn;

	while(str[i] != '\0')
	{
		if(!((str[i] >= 48 && str[i] <= 57) ||
		(str[i] >= 65 && str[i] <= 90) ||
		(str[i] >= 97 && str[i] <= 122)))
		{
			word_number++;
		}
		i++;
	}

	strReturn = malloc(word_number * sizeof(char *));
	if(strReturn == NULL)
	{
		return NULL;
	}

	i = 0;

	while(str[i] != '\0')
	{
		j = 0;

		while((str[i] >= 48 && str[i] <= 57) ||
                (str[i] >= 65 && str[i] <= 90) ||
                (str[i] >= 97 && str[i] <= 122))
		{
			i++;
			j++;
		}

		j++;

		strReturn[k] = malloc(j * sizeof(char));
		if(strReturn[k] == NULL)
		{
			return NULL;
		}


		for(l = 0; l < j - 1; l++)
		{
			strReturn[k][l] = str[i + 1 - j + l];
		}

		strReturn[k][j - 1] = '\0';

		k++;

		if(str[i] != '\0')
		{
			i++;
		}
	}

	strReturn[k] = NULL;

	return strReturn;
}
