#include <stdio.h>

/**
 * main - Returns all single digit numbers of base 10 starting from 0.
 *
 * Return: Always returns 0 to show successful execution.
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);

	printf("\n");

	return (0);
}
