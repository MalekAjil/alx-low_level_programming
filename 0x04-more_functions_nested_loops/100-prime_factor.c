#include<stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	long long int i, num;

	num = 612852475143;

	long long int lf = 1;

	while (num % 2 == 0)
	{
		lf = 2;
		num /= 2;
	}

	for (i = 3; i <= num; i += 2)
	{
		while (num % i == 0)
		{
			lf = i;
			num /= i;
		}
	}

	printf("%lld", lf);

	return (0);
}
