#include <unistd.h>
#include "my.h"

//Write a function that displays the content of an array created with the previous function, and prototyped as follows: int my_show_param_array ( struct info_param const * par ) 

int my_show_param_array(struct info_param const *par)
{
	int i = 0, j = 0;
	char c = 'a';

	while(par[i].str != 0)
	{

		my_put_nbr(par[i].length);

		write(1, "\n", 1);

		j = 0;

		while(par[i].str[j] != '\0')
		{
			c = par[i].str[j];
			write(1, &c, 1);

			j++;
		}

		write(1, "\n", 1);

		j = 0;

		while(par[i].copy[j] != '\0')
		{
			c = par[i].copy[j];
			write(1, &c, 1);

			j++;
		}

		write(1, "\n", 1);

		j = 0;

		if (par[i].word_array != NULL)
		{
			while (par[i].word_array[j] != NULL)
			{
				int k = 0;

				while (par[i].word_array[j][k] != '\0')
				{
					c = par[i].word_array[j][k];
					write(1, &c, 1); k++;
				}

				write(1, "\n", 1);

				j++;
			}
		}

		i++;
	}

	return 0;
}
