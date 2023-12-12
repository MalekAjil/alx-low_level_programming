#include "main.h"

/**
 * _islower - entry point
 * @c: is the code of charchter
 * Return: 1 if c is lowercase 0 otherwise;
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}

/**
 * _isupper - return if the char is uppercase or not
 * @c: char in int value
 * Return: 1 if c uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
		return (0);
}

/**
 * _isalpha - entry point
 * @c: is the code of charchter
 * Return: 1 if c is Letter 0 otherwise;
 */

int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);
	else
		return (0);
}

/**
 * _abs  - entry point
 * @n: is sign of a number.
 * Return: n if n is greater than or equal to zero
 * Returns -1 * n - if n is less than zero
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-1 * n);
	}
}

/**
 * _strlen - returns the length of the string
 * @s: string variable
 * Return: str length
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
