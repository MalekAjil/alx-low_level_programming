#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments paased to the function
 * Return: nothing.
 */
void print_all(const char * const format, ...)
{
	unsigned int i, n;
	va_list lst;
	char *s;

	n = 0;
	while (format[n] != '\0')
	{
		if (format[n] == 'c' || format[n] == 'i'
				|| format[n] == 'f' || format[n] == 's')
			n++;
	}
	va_start(lst, format);
	i = n;
	while (i > 0)
	{
		s = va_arg(lst, char*);
		printf("%s", s);
		if (i != 1)
			printf(", ");
		i--;
	}
	printf("\n");
	va_end(lst);
}
