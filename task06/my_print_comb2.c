#include <stdio.h>
#include "my_print_comb2.h"

int my_print_comb2(void)
{
	int section1 = 0, section2 = 0;

	for(section1 = 0; section1 <= 98;section1++)
	{
		for(section2 = 01; section2 <= 99;section2++)
		{
			printf("%02d %02d", section1, section2);
			if(!(section1 == 98 && section2 == 99))
			{
				printf(", ");
			}
		}
	}

	printf("\n");

	return 0;
}
