#include "main.h"

/**
 * print_last_digit  - entry point
 * @n: is a number.
 * Return: last digit of the number
 */
int print_last_digit(int n)
{
	int m;

	m = n % 10;
	if (m < 0)
		m = -1 * m;
	_putchar(m);
	return (m);
}
