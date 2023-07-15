#include <stdio.h>

/**
 * main - Entry point
 * prints numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 48 ; i < 57 ; i++)
	{
		for (j = i + 1 ; j < 58 ; j++)
		{
			if (i != 48)
				putchar(32);
			putchar(i);
			putchar(j);
			if (i != 56)
				putchar(44);
		}
	}
	putchar(10);
	return (0);
}
