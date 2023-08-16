#include <stdlib.h>
#include <string.h>
#include "calc.h"

/*
 * get_op_func - selects the correct function to perform the operation
 * @s: is the operatorpassed as argument to program
 *
 * Return: a pionter to correct function
 */
int (*get_op_func(char *s))(int a, int b)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;
	while (strcmp((char*)ops[i], NULL) != 0)
	{
		if (strcmp((char*)ops[i], s) == 0)
			return ((*ops[i + 1])(a, b));
		i += 2;
	}
	return (-1);
}
