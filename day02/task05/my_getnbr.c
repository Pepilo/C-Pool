//Write a function that returns a number, sent to the function as a string. It must be prototyped as follows: int my_getnbr ( char const * str ) ;

int my_getnbr(char const *str)
{
	int i = 0;
	int sign = 1;
	int integer = 0;

	while(str[i] != '\0')
	{
		if(str[i] >= '0' && str[i] <= '9')
		{
			if(i != 0 && str[i - 1] == '-')
			{
				sign = -1;
			}

			while(str[i] >= '0' && str[i] <= '9')
			{
				int digit = str[i] - '0';

				if (sign == 1 && integer > (2147483647 - digit) / 10)
				{
					return 0;
				}

				if (sign == -1 && -integer < (-2147483648 + digit) /10)
				{
					return 0;
				}

                		integer = integer * 10 + digit;
                		i++;
			}

			integer *= sign;

			return integer;
		}

		i++;
	}

	return 0;
}
