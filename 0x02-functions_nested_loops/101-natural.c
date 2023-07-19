#include<stdio.h>

/**
 * main - entry point
 * Return: always 0 (success)
 */
int main(void)
{
	int i, s;

	s = 0;
	i = 0;
	while (i * 3 < 1024)
	{
		s += i * 3;
		i++;
	}
	i = 0;
	while (i * 5 < 1024)
	{
		s += i * 5;
		i++;
	}
	printf("%d\n", s);
	return (0);
}
