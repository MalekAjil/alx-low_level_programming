#include <stdio.h>

/**
 * main - Entry point
 * prints numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, l, s;

	s = 0;
	for (i = 0 ; i < 99 ; i++)
	{
		for (j = i + 1 ; j < 100 ; j++)
		{
			k  = i % 10;
			l = j % 10;
			if (s != 0)
				putchar(32);
			else
				s++;
			putchar((i / 10) + 48);
			putchar(k + 48);
			putchar(32);
			putchar((j / 10) + 48);
			putchar(l + 48);
			if (i != 55)
				putchar(44);
		}
	}
	putchar(10);
	return (0);
}
