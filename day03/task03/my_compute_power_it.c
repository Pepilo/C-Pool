//Write an iterative function that returns the first argument raised to the power p, where p is the second argument. It must be prototyped the following way: int my_compute_power_it (int nb , int p ) ;

int my_compute_power_it(int nb, int p)
{
	if(p < 0)
	{
		return 0;
	}

	int result = 1;

	while(p > 0)
	{
		result *= nb;
		p --;
	}

	return result;
}
