#include <stdio.h>

/**
 * main - Entry point
 * prints Alphabet in lower case
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 97 ; i < 123 ; i++)
	{
		putchar(i);
	}

	for (i = 65 ; i < 91 ; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
