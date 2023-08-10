#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat- Concatenates tow strings.
 * @s1: the first string.
 * @s2: the second string.
 * @n: number of concatenated characters from s2.
 * Return: pointer to concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, n1, n2;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	n1 = 0;
	while (s1[n1] != '\0')
		n1++;
	n2 = 0;
	while (s2[n2] != '\0')
		n2++;

	if (n2 > n)
		n2 = n;
	ptr = (char *)malloc(sizeof(char) * (n1 + n2 + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < n2)
	{
		ptr[i + n1] = s2[i];
		i++;
	}
	ptr[i + n1] = '\0';
	return (ptr);
}
