#include<stdio.h>

/**
 * main - entry point
 * Return: always 0 (success)
 */
int main(void)
{
	int i, s;

	s=0;
	for (i = 1 ; i < 1024 ; i++)
	{
		s += i * 3 + i * 5;
	}
	printf("%d\n", s);
}
