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
		_putchar(i / 10);
		_putchar(i % 10);
		_putchar(':');
		for (j = 0; j < 60; j++)
		{
			_putchar(j / 10);
			_putchar(j % 10);
		}
		_putchar('\n');
	}
}
