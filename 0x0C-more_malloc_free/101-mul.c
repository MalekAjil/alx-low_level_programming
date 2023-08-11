#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_error - prints error message with exit code 98.
 * Return: void
 */
void print_error()
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(98);
}
/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	long int num1, num2;

	if (argc ==3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%ld\n", num1 * num2);
	}
	else
		print_error();
	return (0);
}
