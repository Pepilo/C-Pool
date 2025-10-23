#include <unistd.h>

// Write a function that displays the number given as a parameter. It must be able to display all the possible values of an int, and must be prototyped as follows: int my_put_nbr (int nb ) ;

int my_put_nbr_rec(int nb)
{
	char c = '0';

	if(nb == -2147483648)
	{
        	write(1, "-2147483648", 11);

        	return 0;
    	}

  	if (nb < 0)
	{
        	write(1, "-", 1);
        	nb = -nb;
	}

    	if (nb >= 10)
	{
        	my_put_nbr_rec(nb / 10);
	}

	c = (nb % 10) + '0';
	write(1, &c, 1);

	return 0;
}

int my_put_nbr(int nb)
{
	my_put_nbr_rec(nb);

	write(1, "\n", 1);

	return 0;
}
