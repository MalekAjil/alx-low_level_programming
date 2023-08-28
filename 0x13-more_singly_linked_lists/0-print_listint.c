#include "lists.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_int - prints integer
 * @n: the integer number
 * Returns: void
 */
void print_int(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n / 10)
		print_int(n / 10);
	_putchar('0' + n % 10);
}

/**
 * print_listint - prints all elements of a listint_t list.
 * @h: the head of the list
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;
	listint_t *tmp;

	tmp = (listint_t *)h;
	while (tmp != NULL)
	{
		print_int(tmp->n);
		_putchar('\n');
		tmp = tmp->next;
		n++;
	}
	return (n);
}
