#include <stdlib.h>

/*
Write a function that turns the command-line given arguments into a single string. Arguments are to be separated by ‘\n’. The function will be called the following way:
int main (int ac , char ** av )
{
my_putstr ( concat_params ( ac , av ) ) ;
return ( EXIT_SUCCESS ) ;
}
The function must be prototyped as follows: char * concat_params (int argc , char ** argv ) ;
*/

char *concat_params(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int argv_length = 0;
	char *str = NULL;


	for(i = 0; i < argc; i++)
	{
		j = 0;

		while(argv[i][j] != '\0')
		{
			j++;
			argv_length++;
		}

		argv_length++;
	}

	str = malloc(sizeof(char) * (argv_length + 1));

	if(str == NULL)
	{
		return NULL;
	}

	for(i = 0; i < argc; i++)
	{
		j = 0;

		while(argv[i][j] != '\0')
		{
			str[k] = argv[i][j];
			j++;
			k++;
		}

		if(i < argc - 1)
		{
			str[k] = '\n';
			k++;
		}
		else
		{
			str[k] = '\0';
		}
	}

	return str;
}
