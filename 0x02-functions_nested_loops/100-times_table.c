#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: the number
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, m, d;

	if (n >= 0 && n < 16)
	{
		for (i = 0 ; i <= n ; i++)
		{
			for (j = 0; j <= n; j++)
			{
				m = i * j;
				if (j == 0)
					_putchar('0' + m);
				else if (n * n > 99)
				{
					_putchar(m / 100 == 0 ? ' ' : '0' + m / 100);
					d = m - (m / 100 * 100);
					_putchar(d / 10 == 0 && m / 100 == 0 ? ' ' : '0' + d / 10);
					d -= d / 10 * 10;
					_putchar('0' + d);
				}
				else
				{
					_putchar(' ');
					_putchar(m / 10 == 0 ? ' ' : '0' + m / 10);
					m -= m / 10 * 10;
					_putchar('0' + m);
				}
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
