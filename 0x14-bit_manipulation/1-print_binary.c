#include "main.h"

/**
 * print_binary - prints the binary represntation of a number
 * @n: the number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n / 2)
		print_binary(n / 2);
	_putchar('0' + (n % 2));
}
