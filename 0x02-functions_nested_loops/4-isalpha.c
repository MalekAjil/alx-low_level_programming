#include "main.h"

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
