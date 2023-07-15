#include <stdio.h>

/**
 * main - Entry point
 * prints Alphabet in lower case
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 122 ; i > 96 ; i--)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
