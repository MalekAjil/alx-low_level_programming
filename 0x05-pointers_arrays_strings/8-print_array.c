#include "main.h"
#include<stdio.h>
#include<string.h>

/**
 * print_array - prints number of elements
 * @a: the array
 * @n: number of elements to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n)
			printf(", ");
	}
	printf("\n");
}
