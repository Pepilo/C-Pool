#include "my_getnbr_base.h"

//Write a function that converts and returns a number (provided as a string) in a given base into a decimal number. The function must deal with negative numbers, and several successive + or - before the number. If any error occurs, the function must return 0. It must be prototyped the following way: int my_getnbr_base ( char const * str , char const * base ) ;

int my_getnbr_base(char const *str, char const *base)
{
	int i = 0;
	int j = 0;
	int base_length = 0;
	int sign = 1;
	int valide = 0;
	long result = 0;

	while(base[base_length] != '\0')
	{
		if(base[base_length] == '+' || base[base_length] == '-')
		{
			return 0;
		}

		for(j = 0; j < base_length; j++)
		{
			if(base[j] == base[base_length])
			{
				return 0;
			}
		}

		base_length++;
	}

	if(base_length < 2)
	{
		return 0;
	}

	while(str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
		{
			sign = -sign;
		}

		i++;
	}

	while(str[i] != '\0')
	{
		valide = 0;

		for(j = 0; j < base_length; j++)
		{
			if(str[i] == base[j])
			{
				result = result * base_length + j;
				valide = 1;
			}
		}

		if(valide != 1)
		{
			return 0;
		}

		i++;
	}

	result *= sign;

	if(result > 2147483647 || result < -2147483648)
	{
		return 0;
	}

	return (int)result;
}
