#include "main.h"
#include <string.h>

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: the string
 * @i: first index
 * @j: last index
 * Return: returns 1 if a string is a palindrome and 0 if not.
 */
int _compare(int i, int j, char *s);
int is_palindrome(char *s)
{
	int n;

	n = strlen(s);
	if (s[0] == '\0' || n == 1)
	{
		return (1);
	}
	return (_compare(0, n - 1, s));
}
/**
 * _compare - returns 1 if a string is a palindrome and 0 if not.
 * @i: first index
 * @j: second index
 * @s: the string
 * Return: returns 1 if a string is a palindrome and 0 if not.
 */
int _compare(int i, int j, char *s)
{
	if (i >= j)
		return (1);
	if (s[i] == s[j])
		return (_compare(i + 1, j - 1, s));
	return (0);
}
