#include "main.h"

/**
 * check_prime - searches for if a number is prime
 *
 * @a: the number to check
 * @b: the numbers to go through
 *
 * Return: Whether or not @a is a prime number
 */

int check_prime(int a, int b)
{
	if (a <= 1 || a % b == 0)
		return (0);
	else if (a == b)
		return (1);
	else if (a > b)
		check_prime(a, b + 1);

	return (1);
}

/**
 * is_prime_number - checks if an integer is a prime number or not
 *
 * @n: the number
 *
 * Return: 0 if the number is not prime,1 otherwise
 */

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
