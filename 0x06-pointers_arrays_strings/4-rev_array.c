#include "main.h"

/**
 * reverse_array - prints array elements in reverse
 * @a: array of integers
 * @n: number of elements in that array
 */
void reverse_array(int *a, int n)
{
	int temp;
	int *start = a;
	int *end = a + n - 1;

	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}
