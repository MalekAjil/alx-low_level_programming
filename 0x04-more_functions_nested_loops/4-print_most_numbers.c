#include "main.h"

/**
 * print_most_numbers - print the numbers between 0 and 9
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i != 49 && i != 51)
			_putchar(i);
	}
	_putchar('\n');
}
