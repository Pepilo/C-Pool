#include "my_sort_int_array.h"

//Write a function that sorts an integer array in ascending order, given a pointer to the first element of the array and its size. void my_sort_int_array (int * array , int size ) ;

void my_sort_int_array(int *array, int size)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int item = 0;
	int temp_array[size];
	int inserted = 1;

	for (i = 0; i < size; i++)
	{
		temp_array[i] = 0;
	}

	for(i = 0; i < size; i++)
	{
		item = array[i];
		inserted = 1;

		for(j = 0; j < size; j++)
		{
			if(item <= temp_array[j])
			{
				for(k = size - 1; k > j; k--)
				{
					temp_array[k] = temp_array[k - 1];
				}

				temp_array[j] = item;
				inserted = 0;
				break;
			}
		}

		if(inserted != 0)
		{
			temp_array[i] = item;
		}

	}

	for(i = 0; i < size; i++)
	{
		array[i] = temp_array[i];
	}
}
