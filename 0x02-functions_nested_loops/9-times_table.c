#include "main.h"

/**
 * times_table - entry point
 * Return: void
 */
void times_table(void)
{
	int i, j, m;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0; j < 10; j++)
		{
			m = i * j;
			if (m / 10 != 0)
			{
				_putchar('0' + m / 10);
				_putchar('0' + m % 10);
			}
			else
			{
				if (j != 0)
					_putchar(' ');
				_putchar('0' + m);
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
