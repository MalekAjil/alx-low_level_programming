#include<stdio.h>

/**
 * main - Entry point
 * Return: always 0 (success)
 */
int main(void)
{
	int i;
	long s1, s, t;

	i = 0;
	s1 = 0;
	s = 1;
	while (s < 4000000)
	{
		t = s;
		s = s1 + s;
		if (s % 2 == 0)
		{
			if (i != 0)
				printf(", ");
			printf("%li", s);
			i++;
		}
		s1 = t;
	}
	printf("\n");
	return (0);
}
