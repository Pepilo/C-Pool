#include <unistd.h>
#include "my_showstr.h"

//Write a function that prints a string and returns 0. If this string contains non-printable characters, they must be printed hexadecimally (in lowercase letters) with a backslash before the given value. It must be prototyped the following way: int my_showstr ( char const * str ) ;


void my_showstr_hexa(char c, char const *base)
{
	char hex[2];

	hex[0] = base[c / 16];
	hex[1] = base[c % 16];

	write(1, hex, 2);
}

int my_showstr(char const *str)
{
	int i = 0;
	char c = '0';
	char base[] = "0123456789abcdef";

	while(str[i] != '\0')
	{
		c = str[i];

		if(c >= 32 && c <= 126)
		{
			write(1, &c, 1);
		}
		else
		{
			write(1, "\\", 1);
			my_showstr_hexa(c, base);
		}

		i++;
	}

	return 0;
}
