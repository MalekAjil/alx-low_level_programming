#include "main.h"

/**
 * print_numbers - print the numbers between 0 and 9
 * Return: void
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
