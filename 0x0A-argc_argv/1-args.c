#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: the values of arguments
 * Return: 0 always success
 */
int main(int argc, char **argv)
{
	argv[argc] = '\0';
	printf("%d\n", argc - 1);
	return (0);
}
