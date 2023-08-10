#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * multiply - function that multiplies two numbers
 * @n1: first number
 * @n2: other number
 * Return: returns the product of n1 and n2
 */
int multiply(int n1, int n2)
{
	return (n1 * n2);
}

/**
 * main - Entry point of the programe
 * @argc: argument count
 * @argv: arguments
 * Return: 0 for success, 98 if argc is less than required
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int num1;
	int num2;
	int result;

	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				_putchar('E');
				_putchar('r');
				_putchar('r');
				_putchar('o');
				_putchar('r');
				_putchar('\n');
				return (98);
			}
		}
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = multiply(num1, num2);

	if (result == 0)
	{
		_putchar('0');
	}
	else
	{
		char buffer[10];
		int len = 0;

		while (result > 0)
		{
			buffer[len++] = result % 10 + '0';
			result /= 10;
		}

		for (i = len - 1; i >= 0; i--)
		{
			_putchar(buffer[i]);
		}
	}
	_putchar('\n');
	return (0);
}
