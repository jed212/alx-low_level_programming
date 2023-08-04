#include <stdio.h>

/**
 * main - prints all the arguments it receives
 * @argc: The number of arguments
 * @argv: The arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc __attribute__((unused)), *char argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
