#include <stdio.h>

/**
 * main - Returns the alphabet in lowercase,except for q and e.
 *
 * Return: Always returns 0 to show success
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
