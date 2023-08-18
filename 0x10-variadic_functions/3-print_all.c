#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments paased to the function
 * Return: nothing.
 */
void print_all(const char * const format, ...)
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
