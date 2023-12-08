#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main entery
 * @ac: the arguments count
 * @av: the arguments values
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	if (ac != 2)
		return (1);
	printf("%s", av[1]);
	return (0);
}
