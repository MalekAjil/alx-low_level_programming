#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * prints "Last digit of 629438752 is 2 and is less than 6 and not 0"
 * prints "Last digit of 491506926 is 6 and is greater than 5"
 * prints "Last digit of 809065140 is 0 and is 0"
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int m = n % 10;

	if (m >= 6)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	}
	else if (m == 0)
	{
		printf("Last digit of %d is 0\n", n);
	}
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	return (0);
}
