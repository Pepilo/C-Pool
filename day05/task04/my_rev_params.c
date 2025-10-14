#include <unistd.h>

//Write a program that displays all the arguments received on the command line in reverse order. You are to display all arguments (including argv[0]), on different lines.

int main(int argc, char *argv[])
{
	int i = 0;
	int j = 0;

	i = argc -1;

	while(i >= 0)
	{
		j = 0;

		while(argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}

		write(1, "\n", 1);
		i--;
	}

	return 0;
}
