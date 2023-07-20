#include "main.h"

/**
 * _isupper - return if the char is uppercase or not
 * @c: char in int value
 * Return: 1 if c uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c > 65 && c < 91)
	{
		return (1);
	}
	else
		return (0);
}
