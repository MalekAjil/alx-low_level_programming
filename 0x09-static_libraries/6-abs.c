#include "main.h"

/**
 * _abs  - entry point
 * @n: is sign of a number.
 * Return: n if n is greater than or equal to zero
 * Returns -1 * n - if n is less than zero
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-1 * n);
	}
}
