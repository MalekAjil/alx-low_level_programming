#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: the first number
 * @m: the second number
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int b = 0;
	unsigned long int l = n ^ m;

	while (l)
	{
		if (l & 1)
			b++;
		l = l >> 1;
	}
	return (b);
}
