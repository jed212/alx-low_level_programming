#include <stdio.h>

/**
 * main - Returns alphabet in lowercase and then in uppercase.
 *
 * Return: Always 0 to show successful execution
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
