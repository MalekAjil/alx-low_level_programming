#include "main.h"

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int n = 0, i = 0, m = 1;

	if (b != NULL)
	{
		while (b[i] != '\0')
			i++;
		while (--i >= 0)
		{
			if (b[i] != '0' && b[i] != '1')
				return (0);
			if (b[i] == '1')
				n += m;
			m *= 2;
		}
		return (n);
	}
	return (0);
}
