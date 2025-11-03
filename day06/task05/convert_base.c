#include <stdlib.h>

//Write a function that returns the result from the nbr string conversion (expressed in a base_from radix to a base_to radix), in the form of a newly, and sufficiently, allocated string. The number, represented by nbr, fits in an integer. The function must be prototyped as follows: char * convert_base ( char const * nbr , char const * base_from , char const * base_to ) ;

int my_putnbr_base_rec(int nbr, char const *base, int base_length)
{
        int reste;
        char c = '0';

        if(nbr >= base_length)
        {
                my_putnbr_base_rec(nbr / base_length, base, base_length);
        }

        reste = nbr % base_length;
        c = base[reste];
        write(1, &c, 1);

        return 0;
}

char *convert_base(char const *nbr, char const *base_from, char const *base_to)
{
	int i = 0;
	int base_from_length = 0;
	int base_to_length = 0;
	int nbr_length = 0;
	int nbr_int = 0;
	int dec = 1;
	int *nbr_str;

	while(base_to[base_to_length] != '\0')
        {
                base_to_length ++;
        }

	while(base_from[base_from_length] != '\0')
        {
                base_from_length ++;
        }

	while(nbr[nbr_length] != '\0')
	{
		nbr_length++;
	}

	nbr_str = malloc(nbr_length * sizeof(int));
	if(nbr_str == NULL)
	{
		return -1;
	}

	for(i = 0; i < nbr_length; i++)
	{
		nbr_str[i] = nbr[i] - '0';
	}

	for(i = nbr_length - 1; i >= 0; i--)
	{
		nbr_int += nbr_str[i] * dec;
		dec *= 10;
	}

	if(nbr_int < 0)
        {
                nbr_int = -nbr_int;
        }

	my_putnbr_base_rec(nbr_int, base_to, base_to_length);

	return str;
}
