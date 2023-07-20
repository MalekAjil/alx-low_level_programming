#include<stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	
	for (i = 1; i < 101; i++)
	{
		if (i % 3)
			printf("Fizz ");
		else if (i % 5)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
