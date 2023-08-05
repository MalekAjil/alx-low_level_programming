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
	if (argc == 2)
	{
		i = atoi(argv[1]);
		if (i < 0)
			printf("0\n");
		else
		{
			sum += i / 25;
			i = i % 25;
			sum += i / 10;
			i = i % 10;
			sum += i / 5;
			i = i % 5;
			sum += i / 2;
			i = i % 2;
			sum += i;
			printf("%d\n", sum);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
