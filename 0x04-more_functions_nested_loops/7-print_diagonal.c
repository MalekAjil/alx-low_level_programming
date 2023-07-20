#include "main.h"

/**
 * print_diagonal - print diagonal line
 * @n: the number of \s
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j)
				_putchar(95);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
