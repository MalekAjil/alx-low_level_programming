#include "main.h"

/**
 * print_binary - prints the binary represntation of a number
 * @n: the number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int m = n, b = 1;

	while (m)
	{
		m = m>>1;
		if (!m)
			break;
		b = b<<1;
	}
	while (b)
	{
		if (n&b)
			_putchar('1');
		else
			_putchar('0');
		b = b>>1;
	}
}
