#include "main.h"

/**
 * jack_bauer - entry point
 * Return: void
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0 ; i < 25 ; i++)
	{
		_putchar('0' + i / 10);
		_putchar('0' + i % 10);
		_putchar(':');
		for (j = 0; j < 60; j++)
		{
			_putchar('0' + j / 10);
			_putchar('0' + j % 10);
		}
		_putchar('\n');
	}
}
