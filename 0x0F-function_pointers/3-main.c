#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calc.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	if (*argv[2] != '+'
			&& *argv[2] != '-'
			&& *argv[2] != '*'
			&& *argv[2] != '/'
			&& *argv[2] != '%')
	{
		printf("Error\n");
		return (99);
        }
	if ((*argv[2] == '/' || *argv[2] == '%')
			&& *argv[3] == '0')
	{
		printf("Error\n");
                return (100);
        }

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", (get_op_func(argv[2]))(a, b));

	return (0);
}
