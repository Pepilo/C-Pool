//Write a function that returns 1 if the number is prime and 0 if not. It must be prototyped the following way: int my_is_prime (int nb ) ;

int my_is_prime(int nb)
{
	int i = 1;

	if(nb == 0 || nb == 1)
	{
		return 0;
	}

	while(i < nb)
	{
		i++;

		if(nb % i == 0)
		{
			return 0;
		}
	}

	return 1;
}
