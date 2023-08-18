#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: the string to be printed between strings
 * @n: the number of strings passed to the functions
 * Return: nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list lst;
	char *s;

	va_start(lst, n);
	for (i = n; i > 0; i--)
	{
		s = va_arg(lst, char*);
		printf("%s", s == NULL ? "(nil)" : s);
		if (separator != NULL && i != 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(lst);
}
