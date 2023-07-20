#include<stdio.h>

/**
 * main - Entry point
 * Return: always 0 (success)
 */
int main(void)
{
	int i;
	double s1, s, t;

	s1 = 0;
	s = 1;
	for (i = 1 ; i <= 98 ; i++)
	{
		t = s;
		s = s1 + s;
		printf("%.0f", s);
		s1 = t;
		if (i != 98)
			printf(", ");
	}
	printf("\n");
	return (0);
}
