#include "3-calc.h"
#include <stddef.h>

/**
  * get_op_func -  function that selects the correct function to perform the operation.
  * @s: the operation symbol
  * Return: the operation.
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	int j;

	j = 0;
	while (j < 6)
	{
		if (*(ops + j)->op == *s)
			return (*(ops + j)->f);
		j++;
	}
	return (NULL);
}
