#include <stdio.h>

/**
 * main - Entry point
 * prints numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48 ; i < 58 ; i++)
	{
		putchar(32);
		putchar(i);
		putchar(44);
	}
	putchar(10);
	return (0);
}
