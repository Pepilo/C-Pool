#include <unistd.h>

// Write a function that prints a memory dump and return 0. It must be prototyped the following way: int my_showmem ( char const * str , int size ) ;

int my_showmem(char const *str, int size)
{
	int i = 0, j = 0;
	char hex[2];
	char hexa[16] = "0123456789ABCDEF";
	char buf[17];
	char c = 'a';

	for(i = 0; i < size; i += 16)
	{
    		for (j = 7; j >= 0; j--)
    		{
			c = hexa[(i >> (j * 4)) & 0xF];

        		write(1, &c, 1);
    		}

		write(1, ": ", 2);

		for(j = 0; j < 16; j++)
		{
			if(i + j < size)
			{
				c = str[i + j];

				hex[0] = hexa[c / 16];
				hex[1] = hexa[c % 16];

				write(1, hex, 2);
			}
			else
			{
				write(1, "  ", 2);
			}

			if(j % 2 == 1)
			{
				write(1, " ", 1);
			}

		}

		for(j = 0; j < 16; j++)
		{
			if(i + j < size)
			{
				c = str[i + j];

				if(c >= 32 && c <= 127)
				{
					write(1, &c, 1);
				}
				else
				{
					write(1, ".", 1);
				}
			}
			else
			{
				write(1, ".", 1);
			}
		}

		write(1, "\n", 1);
	}

	return 0;
}
