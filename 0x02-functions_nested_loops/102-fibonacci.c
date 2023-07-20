#include<stdio.h>

/**
 * fibonacci - recursive function which returns fibonacci sequence
 * @n: max number
 * Return: fibunacci number correspounding to n
 */
int fibonacci(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (fibonacci(n - 2) + fibonacci(n - 1));
	}
}

/**
 * main - Entry point
 * Return: always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 1 ; i <= 50 ; i++)
		printf("%d, ", fibonacci(i));
	printf("\n");
	return (0);
}
