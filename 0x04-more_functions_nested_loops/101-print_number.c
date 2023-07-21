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
		_putchar('0' + (n / 10000));
		n -= n / 10000 * 10000;
		_putchar('0' + (n / 1000));
                n -= n / 1000 * 1000;
		_putchar('0' + (n / 100));
                n -= n / 100 * 100;
		_putchar('0' + (n / 10));
                n -= n / 10 * 10;
	}
	else if (n > 999)
	{
                _putchar('0' + (n / 1000));
		n -= n / 1000 * 1000;
		_putchar('0' + (n / 100));
                n -= n / 100 * 100;
		_putchar('0' + (n / 10));
                n -= n / 10 * 10;
	}
	else if (n > 99)
	{
                _putchar('0' + (n / 100));
		n -= n / 100 * 100;
		_putchar('0' + (n / 10));
                n -= n / 10 * 10;
	}
	else if (n > 9)
	{
                _putchar('0' + (n / 10));
		n -= n / 10 * 10;
	}
	_putchar('0' + (n % 10));
}
