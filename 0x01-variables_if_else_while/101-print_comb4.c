#include <stdio.h>

/**
 * main - Entry point
 * prints numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, s;

	s = 0;
	for (i = 48 ; i < 56 ; i++)
	{
		for (j = i + 1 ; j < 57 ; j++)
		{
			for (k = j + 1; k < 58 ; k++)
			{
				if (s != 0)
					putchar(32);
				else
					s++;
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != 55)
					putchar(44);
			}
		}
	}
	putchar(10);
	return (0);
}
