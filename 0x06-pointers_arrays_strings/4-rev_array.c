#include "main.h"
#include <string.h>

/**
 * reverse_array - reverse the elements of the array.
 * @a: the array
 * @n: the number of elements in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, t;

	for (i = 0; i < n / 2; i++)
	{
		t = a[i];
		a[i] = a[n - i -1];
		a[n - i -1] = t;
	}
}
