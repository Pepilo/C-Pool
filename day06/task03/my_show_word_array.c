#include <unistd.h>
#include "my_show_word_array.h"

//Write a function that displays the content of an array of words. There must be one word per line, and each word must end with ‘\n’, including the last one. The function must be prototyped as follows: int my_show_word_array ( char * const * tab ) ;

int my_show_word_array(char * const *tab)
{
	int i = 0;
	int j = 0;

	while(tab[i] != NULL)
	{
		j = 0;

		while(tab[i][j] != '\0')
		{
			write(1, &tab[i][j], 1);
			j++;
		}

		write(1, "\n", 1);
		i++;
	}

	return 0;
}
