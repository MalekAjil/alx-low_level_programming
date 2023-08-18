#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments paased to the function
 * Return: nothing.
 */
void print_all(const char * const format, ...)
{
	unsigned int n;
	va_list lst;
	char *s;

	n = 0;
	va_start(lst, format);
	while (format[n] != '\0')
	{
		switch (format[n])
		{
			case 'c':
				printf("%c", va_arg(lst, int));
				break;
			case 'i':
				printf("%d", va_arg(lst, int));
				break;
			case 'f':
				printf("%f", va_arg(lst, double));
				break;
			case 's':
				s = va_arg(lst, char*);
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
			default:
				break;
		}
		if ((format[n] == 'c' || format[n] == 'i' || format[n] == 'f'
				|| format[n] == 's') && format[n + 1] != '\0')
			printf(", ");

		n++;
	}
	printf("\n");
	va_end(lst);
}
