#include "my_put_nbr.h"

//Create a main function within a file named tests_my_put_nbr.c, to be stored in the tests directory. This function must contain all the necessary calls to my_put_nbr in order to cover all of the function’s possible situations (both regular or irregular).

int main(void)
{

	my_put_nbr(0);
	my_put_nbr(42);
	my_put_nbr(2147483647);
	my_put_nbr(-42);
	my_put_nbr(-2147483648);

	return 0;

}
