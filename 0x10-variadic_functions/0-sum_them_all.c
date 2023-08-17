#include <stdarg.h>

/**
 * sum_them_all - sum all arguments
 * @n: number of variadic
 * Return: sum of Variadic.
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, sum;
	va_list ap;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(ap, n);
	for (i = n; i >= 0; i = va_arg(ap, int))
		sum += i;
	va_end(ap);
	return (sum);
}
