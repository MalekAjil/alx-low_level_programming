#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - check the code
 * @argc: arguments count
 * @argv: arguments values
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int a, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	if (a <= 0)
	{
		printf("Error\n");
		return (2);
	}
	for (i = 0; i < a; i++)
	{
		printf("%x", i);
		if (i + 1 != a)
			printf(" ");
	}
	printf("\n");

	return (0);
}
