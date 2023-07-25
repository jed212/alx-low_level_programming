#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

/**
 * generate_random_char - Generates a random character
 *
 * main - Generates a random password and prints it
 *
 * Return: Returns a random password
 */
char generate_random_char(void)
{
	const char charset[] = "abcdefghijklmnopqrstuvwxyz"
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"0123456789";
	int index = rand() % (sizeof(charset) - 1);

	return (charset[index]);
}

int main(void)
{
	srand(time(NULL));

	char password[PASSWORD_LENGTH + 1];
	int i;

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = generate_random_char();
	}
	password[PASSWORD_LENGTH] = '\0';
	printf("%s", password);
	return (0);
}
