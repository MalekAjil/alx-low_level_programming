#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: the values of arguments
 * Return: 0 always success
 */
int main(int argc, char **argv)
{
	int sum;

	sum = 0;
	if (argc > 1)
	{
		while (--argc)
		{
			if (argv[argc][0] > 47 && argv[argc][0] < 58)
				sum += atoi(argv[argc]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");
	return (0);
}
