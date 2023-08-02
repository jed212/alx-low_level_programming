#include "main.h"

/**
 * palindromeCheck - checks the string
 *
 * @str: string to be checked
 * @len: length of the string
 * @i: the incrementor initially at 0
 *
 * Return: 1 if palindrome, 0 otherwise
 */

int palindromeCheck(char *str, int len, int i)
{
	if (i < len && str[i] == str[len])
		return (palindromeCheck(str, len - 1, i + 1));
	if (str[i] != str[len])
		return (0);
	return (1);
}

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: the string
 *
 * Return: an integer that displays the length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));

	return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: the string
 *
 * Return: 1 if it's a palindrome, 2 otherwise
 */

int is_palindrome(char *s)
{
	int i = 0;
	int length = _strlen_recursion(s) - 1;

	return (palindromeCheck(s, length, i));
}
