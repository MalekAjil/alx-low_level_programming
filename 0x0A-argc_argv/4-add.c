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
	int i, sum;

	sum = 0;
	if (argc > 1)
	{
		while (--argc)
		{
			i = 0;
			while (argv[argc][i] != '\0')
			{
				if (argv[argc][i] < 48 || argv[argc][i] > 57)
				{
					printf("Error\n");
					return (1);
				}
				i++;
			}
			sum += atoi(argv[argc]);
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");
	return (0);
}
