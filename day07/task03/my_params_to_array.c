#include <stdlib.h>
#include "my.h"

//Write a function that stores the program’s parameters into an array of structures and returns the address of the array’s first cell. All array elements are to be addressed, including av[0]. The function must be prototyped as follows: struct info_param * my_params_to_array (int ac , char ** av ) ;

struct info_param *my_params_to_array(int ac, char **av)
{
	int i = 0, j = 0;
	int len = 0;
	struct info_param *params;

	params = malloc(sizeof(struct info_param) * (ac +1));
	if(params == NULL)
	return NULL;

	for(i = 0; i < ac; i++)
	{
		len = 0;

		while(av[i][len] != '\0')
		{
			len++;
		}

		params[i].length = len;
		params[i].str = av[i];

		params[i].copy = malloc(sizeof(char) * (len + 1));
		if(params[i].copy == NULL)
		return NULL;

		for(j = 0; j <= len; j++)
		{
			params[i].copy[j] = av[i][j];
		}

		params[i].word_array = my_str_to_word_array(av[i]);
	}

	params[ac].str = 0;
	params[ac].copy = 0;
	params[ac].word_array = 0;
	params[ac].length = 0;

	return params;
}
