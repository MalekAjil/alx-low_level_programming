#include<stdio.h>
#include "main.h"

/**
 * add - returns the sum of two numbers
 * @a: the first parameter
 * @b: the second parameter
 * Return: the sum of two numbers
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n ; i < 99 ; i++)
		{
			printf("%d,\n", i);
		}
	}
	else
	{
		for (i = n ; i > 97 ; i++)
		{
			printf("%d,\n", i);
		}
	}
}
