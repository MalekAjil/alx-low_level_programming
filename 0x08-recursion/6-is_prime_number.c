#include "main.h"

/**
 * is_prime_number - returns 1 if the input is prime number, 0 otherwise.
 * @n: the number
 * @i: test number
 * Return: 1 if the input is prime number, 0 otherwise.
 */
int _test(int i, int n);
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (_test(2, n));
}
/**
 * _test - return 1 or 0
 * @i: test number
 * @n: the number
 * Return: sqrt number
*/
int _test(int i, int n)
{
	if (i == n)
		return (1);
	else if (i > n || n % i == 0)
		return (0);
	else
		return (_test(i + 1, n));
}
