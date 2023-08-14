#include <stdio.h>

/**
 * main - returns the name of the file it was compiled from
 * Return: 0 (Always)
 */
int main(void)
{
	fputs(__FILE__ "\n", stdout);
	return (0);
}
