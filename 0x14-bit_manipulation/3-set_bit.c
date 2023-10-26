#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: the number.
 * @index: is the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 1;

	if (index > 100)
		return (-1);
	m = m << index;
	*n = *n | m;
	return (1);
}
