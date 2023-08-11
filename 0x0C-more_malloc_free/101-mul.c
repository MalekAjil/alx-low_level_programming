#include "main.h"
#include <stdlib.h>

/**
 * print_error - prints error message with exit code 98.
 * Return: void
 */
void print_error(void)
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
 * strtnum - convert string into number.
 * @str: the string.
 * Return: the number.
 */
unsigned long int strtnum(char *str)
{
	unsigned long int num, t;
	int i, j, k;

	num = 0;
	for (i = 0; str[i] != '\0'; i++)
		;
	i--;
	for (j = i; j >= 0; j--)
	{
		if (str[j] > 47 && str[j] < 58)
		{
			if (i == j)
				num += str[j] - 48;
			else
			{
				t = 1;
				for (k = 0; k < i - j; k++)
					t *= 10;
				t *= str[j] - 48;
				num += t;
			}
		}
		else
			print_error();
	}
	return (num);
}

/**
 * print_num - prints the number
 * @num: the number.
 * Return: void
 */
void print_num(unsigned long int num)
{
	if (num / 10)
		print_num(num / 10);
	_putchar('0' + (num % 10));
}

/**
 * main - check the code for
 * @argc: the number of arguments.
 * @argv: the values of arguments.
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	unsigned long int num1, num2;

	if (argc == 3)
	{
		num1 = strtnum(argv[1]);
		num2 = strtnum(argv[2]);
		print_num(num1 * num2);
		_putchar('\n');
	}
	else
		print_error();
	return (0);
}
