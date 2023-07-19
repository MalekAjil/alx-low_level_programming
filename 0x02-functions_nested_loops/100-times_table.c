#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: the number
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, m;

	if (n >= 0 && n < 16)
	{
		for (i = 0 ; i <= n ; i++)
		{
			for (j = 0; j <= n; j++)
			{
				m = i * j;
				if (m / 100 != 0)
				{
					_putchar('0' + m / 100);
					_putchar('0' + m / 10);
					_putchar('0' + m % 10);
				}
				else if (m / 10 != 0)
				{
					if (n * n > 99)
						_putchar(' ');
					_putchar('0' + m / 10);
					_putchar('0' + m % 10);
				}
				else
				{
					if (j != 0 && n * n > 99)
					{
						_putchar(' ');
						_putchar(' ');
					}
					else if (j != 0)
						_putchar(' ');
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
