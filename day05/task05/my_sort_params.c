#include <unistd.h>

//Write a program that displays all its arguments, in ascii order. You are to display all arguments (including argv[0]), on different lines.

int main(int argc, char *argv[])
{
	int i, j, k = 0;
	char *tmp;

	for(i = 0; i < argc; i++)
	{
		for(j = i + 1; j < argc; j++)
		{
			k = 0;

			while (argv[i][k] == argv[j][k] && argv[i][k] != '\0' && argv[j][k] != '\0')
			{
				k++;
			}

			if (argv[i][k] > argv[j][k])
			{
				tmp = argv[i];
				argv[i] = argv[j];
				argv[j] = tmp;
			}
		}
	}

	for(i = 0; i < argc; i++)
	{
		j = 0;

		while(argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}

		write(1, "\n", 1);
	}

	return 0;
}
