#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the addition of positive numbers
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If one of the numbers contains symbols that are non-digits - 1.
 *         Otherwise - 0.
 */

int main(int argc, char *argv[])
{
	int j, i, sum = 0;

	for (j = 1; j < argc; j++)
	{
		for (i = 0; argv[j][i]; i++)
		{
			if (argv[j][i] < '0' || argv[j][i] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[j]);
	}

	printf("%d\n", sum);

	return (0);
}

