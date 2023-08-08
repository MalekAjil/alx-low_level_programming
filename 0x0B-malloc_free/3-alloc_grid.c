#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width.
 * @height: height.
 * Return: pointer to 2D array.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **a;

	a = (int **)malloc(sizeof(int *) * width);
	for (i = 0; i < width; i++)
	{
		a[i] = (int *)malloc(sizeof(int) * height);
	}
	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			a[i][j] = 0;
	return (a);
}
