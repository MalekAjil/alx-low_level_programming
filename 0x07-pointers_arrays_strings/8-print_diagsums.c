#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_diagsums - prints the two diagonals sums.
 * @a: the two dimetional array
 * @size: the size of array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	unsigned int d1, d2;

	d1 = 0;
	d2 = 0;

	for (i = 0; i < size * size; i += size)
	{
		for (j = 0; j < size; j++)
		{
			if (i / size == j)
				d1 += a[i + j];
			if ((i / size) + j == size - 1)
				d2 += a[i + j];
		}
	}
	printf("%d, %d\n", d1, d2);
}
