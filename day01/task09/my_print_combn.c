#include <unistd.h>

//Write a function that displays, in ascending order, all the numbers composed by $n$ different digits numbers ($n$ being given as a parameter). Given $n$ digits (all different), only the smallest number composed by thoses digits must be displayed. It must be prototyped as follows: int my_print_combn (int n ) ;

int recur_my_print_combn(int n, int bufCompt[], int j)
{
	int  k = 0;
	char buf[n];

	for(bufCompt[j] = (j == 0 ? 0 : bufCompt[j - 1] + 1); bufCompt[j] <= 10 - n + j; bufCompt[j]++)
	{
		if(j < n - 1)
		{
			recur_my_print_combn(n, bufCompt, j + 1);
		}
		else
		{
			for(k = 0; k < n; k++)
			{
				buf[k] = '0' + bufCompt[k];
			}

			write(1, buf, n);

			if(!(bufCompt[0] == 10 - n && bufCompt[n - 1] == 9))
			{
				write(1, ", ", 2);
			}
		}
	}

	return 0;
}

int my_print_combn(int n)
{
	int bufCompt[n];
	int i =0;
	int j = 0;

	for(i = 0; i < n; i++)
	{
		bufCompt[i] = 0;
	}

	recur_my_print_combn(n, bufCompt, j);

	write(1, "\n", 1);

	return 0;
}
