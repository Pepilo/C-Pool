//Write an iterative function that returns the factorial of the number given as a parameter. It must be prototyped the following way: int my_compute_factorial_it (int nb ) ;

int my_compute_factorial_it(int nb)
{
	int i = 0;

	if(nb < 0)
	{
		return 0;
	}

	int result = 1;

	for(i = nb; i >= 1; i--)
	{
		result *= i;
	}

	return result;
}
