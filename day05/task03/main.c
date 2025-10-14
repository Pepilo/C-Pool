#include <unistd.h>

//Write a program that displays its arguments (received on the command line). Since it is a PROGRAM, you need to put the main function in your delivered files. You are to display all arguments (including argv[0]), on different line

int main(int argc, char *argv[])
{
	int i = 0;
	int j = 0;

	while(argv[i] != NULL)
	{
		j = 0;

		while(argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}

		write(1, "\n", 1);
		i++;
	}

	return 0;
}
