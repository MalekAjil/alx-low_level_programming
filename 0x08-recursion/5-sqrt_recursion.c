#include "main.h"

/**
 *  _sqrt_recursion- returns the factorial of a given number.
 * @n: the number
 * @i: test number
 * Return: sqrt number
 */
int _sqrt(int i, int n);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (n);
	return (_sqrt(2, n));
}
/**
 * _sqrt - return sqrt of n
 * @i: test number
 * @n: the number
 * Return: sqrt number
*/
int _sqrt(int i, int n)
{
	if (i * i == n)
		return (i);
	else if (i * i < n)
		return (_sqrt(i + 1, n));
	else
		return (-1);
}
