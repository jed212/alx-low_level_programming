#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: The number of arguments
 * @argv: The array of arguments
 * Return: 0 for success, 1 if a non-digit argument
 */
int main(int argc, char *argv[])
{
	int sum;
	int numsc;
	int i;

	numsc = 1;
	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (numsc < argc)
	{
		for (i = 1; argv[numsc][i] != '\0'; i++)
		{
			if (!(isdigit(argv[numsc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[numsc]);
		numsc++;
	}
	printf("%d\n", sum);
	return (0);
}
