#include <unistd.h>
#include "my_putnbr_base.h"

//Write a function that converts and displays a decimal number into a number in a given base. The number is given as an int and the base is provided as a string. The base contains all the symbols that can be used to print a number (for instance, 0123456789 for the dec␂imal base, 01 for the binary base, 0123456789ABCDEF for the hexadecimal base). The function must deal with negative numbers, and be prototyped the following way: int my_putnbr_base (int nbr , char const * base ) ;

int my_putnbr_base_rec(unsigned int nbr, char const *base, int divider)
{
	int reste;
	char c = '0';

	if(nbr >= (unsigned int)divider)
	{
		my_putnbr_base_rec(nbr / divider, base, divider);
	}

	reste = nbr % divider;
	c = base[reste];
	write(1, &c, 1);

	return 0;
}

int my_putnbr_base(int nbr, char const *base)
{
	int divider = 0;

	while(base[divider] != '\0')
	{
		divider ++;
	}

	if(divider < 2)
	{
		return 0;
	}

	long n = nbr;

	if(nbr < 0)
	{
		write(1, "-", 1);
		n = -n;
	}

	my_putnbr_base_rec((unsigned int)n, base, divider);

	return 0;
}
