//Write a function that returns the square root (if it is a whole number) of the number given as argument. If the square root is not a whole number, the function should return 0. It must be prototyped the following way: int my_compute_square_root (int nb ) ;

int my_compute_square_root(int nb)
{
	int i = 1;

	if(nb < 0)
	{
		return 0;
	}

	if(nb == 0 || nb == 1)
	{
		return nb;
	}

	while(i <= nb / i)
	{
		i++;

		if(i * i == nb)
		{
			return i;
		}
	}

	return 0;
}
