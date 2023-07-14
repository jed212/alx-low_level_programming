#include <stdio.h>

/**
 * main - Prints an alphabet in lowercase
 *
 * Return: Always 0 showing successful execution
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
