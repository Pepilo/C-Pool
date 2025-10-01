#include "my_swap.h"

//Write a function that swaps the content of two integers, whose addresses are given as a parameter. It must be prototyped as follows: void my_swap (int *a , int * b ) ;

void my_swap(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
