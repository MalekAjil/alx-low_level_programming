#include<stdio.h>

/**
 * main - Entry point
 * Return: always 0 (success)
 */
int main(void)
{
	int i;
	long s1, s, t, es;

	i = 0;
	s1 = 0;
	s = 1;
	es = 0;
	while (s < 4000000)
	{
		t = s;
		s = s1 + s;
		if (s % 2 == 0)
		{
			es += s;
		}
		s1 = t;
	}
	printf("%li", es);
	printf("\n");
	return (0);
}
