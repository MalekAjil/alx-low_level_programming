#include "main.h"

/**
 * islower  - entry point
 * @c: is the code of charchter
 * Return: 1 if c is lowercase 0 otherwise;
 */

int islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
