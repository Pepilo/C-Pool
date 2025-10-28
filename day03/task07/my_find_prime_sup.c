//Write a function that returns the smallest prime number that is greater than, or equal to, the number given as a parameter. It must be prototyped the following way: int my_find_prime_sup (int nb ) ;

int my_find_prime_sup(int nb)
{
	if(nb <= 1)
	{
		return my_find_prime_sup(nb + 1);
	}

	int i = 2;

	while(i < nb)
	{
		if(nb % i == 0)
		{
			return my_find_prime_sup(nb + 1);
		}

		i++;
	}

	return nb;
}
