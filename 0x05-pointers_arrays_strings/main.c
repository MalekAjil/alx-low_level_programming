#include <stdio.h>

/**
 * main - using sizeof to dynamically determine the size of types char,
 * int and float
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int *p;

	n = 98;
	p = &n;

	printf("Size of type 'char' on my computer: %lu bytes\n", sizeof(char));
	printf("Size of type 'int' on my computer: %lu bytes\n", sizeof(int));
	printf("Size of type 'float' on my computer: %lu bytes\n", sizeof(float));
	printf("Size of type of my variable n on my computer: %lu bytes\n",
			sizeof(n));

	printf("size of p is %lu\n", sizeof(p));
	printf("value of p is %p\n", p);
	printf("address of n %p\n", &n);
	printf("value of *p %d\n", *p);


	return (0);
}
