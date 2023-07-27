#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * infinite_add - add two numbers
 * @n1: first number
 * @n2: second number
 * @r: the buffer that the function will use to store the result
 * @size_r: buffer size
 * Return: result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	long int m1, m2, res;

	res = size_r;
	m1 = atoi(n1);
	m2 = atoi(n2);
	res = m1 + m2;
	sprintf(r, "%ld", res);
	return (r);
}
