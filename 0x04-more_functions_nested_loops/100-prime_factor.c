#include<stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	long i;

	i = 612852475143;
	while (i > 1)
	{
		if (i % 2 == 0)
		{
			printf("2");
			i /= 2;
		}
		else if (i % 3 == 0)
		{
			printf("3");
			i /= 3;
		}
	return (0);
}
