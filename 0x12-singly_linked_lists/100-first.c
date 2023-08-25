#include <stdio.h>

/**
 * _print - print a message
 * Return: void.
 */
void _print(void) __attribute__ ((constructor));
void _print(void)
{
	printf("You're beat! and yet, you must allow,\n%s",
			"I bore my house upon my back!\n");
}
