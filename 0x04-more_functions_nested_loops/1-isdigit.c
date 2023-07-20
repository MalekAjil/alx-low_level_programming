#include "main.h"

/**
 * _isdigit - return if the char is uppercase or not
 * @c: char in int value
 * Return: 1 if c is digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
		return (0);
}
