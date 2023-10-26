#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: the number
 * @index: the index, starting from 0
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b = 1;

	if (index > 100)
		return (-1);
	b = b << index;
	*n = *n & ~b;
	return (1);
}
