#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the functions
 * Return: nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list lst;

	va_start(lst, n);
	for (i = n; i > 0; i--)
	{
		printf("%d", va_arg(lst, int));
		if (separator != NULL && i != 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(lst);
}
