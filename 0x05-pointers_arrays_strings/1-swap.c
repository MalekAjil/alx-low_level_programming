#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a: the first parameter
 * @b: the second parameter
 * return: void
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
