#include <stdio.h>
#include "my_print_alpha.h"

int my_print_alpha(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z';c++)
	{
		printf("%c", c);
	}

	printf("\n");

	return 0;
}
