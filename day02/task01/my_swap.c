#include "my_swap.h"

void my_swap(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
