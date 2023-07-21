#include "main.h"

/**
 * print_number - prints number using _putchar
 * @n: the number
 *
 * Return: always 0 (success)
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n > 9999)
	{
		_putchar('0' + ((n / 10000) + 48));
		n /= 10000;
	}
	if (n > 999)
	{
                _putchar('0' + ((n / 1000) + 48));
		n /= 1000;
	}
	if (n > 99)
	{
                _putchar('0' + ((n / 100) + 48));
		n /= 100;
	}
	if (n > 9)
	{
                _putchar('0' + ((n / 10) + 48));
		n /= 10;
	}
	_putchar('0' + (n + 48));
}
