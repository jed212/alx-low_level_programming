#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: The number of arguments
 * @argv: The arguments
 *
 * Return: 1 if it does not receive two arguments,
 * 0 for success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
