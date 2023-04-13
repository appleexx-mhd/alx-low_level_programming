#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i;
	unsigned int x;
	unsigned int l1 = 0;
	unsigned int l2 = 0;

	i = 0;
	while (s1[i] != '\0')
	{
		l1++;
		i++;
	}
	x = 0;
	while (s2[x] != '\0')
	{
		l2++;
		x++;
	}
	if (n < l2)
		s = malloc(sizeof(char) * (l1 + n + 1));
	else
		s = malloc(sizeof(char) * (l1 + l2 + 1));
	if (!s)
		return (NULL);
	i = 0;
	while (i < l1)
	{
		s[i] = s1[i];
		i++;
	}
	x = 0;
	while (n < l2 && i < (l1 + n))
		s[i++] = s2[x++];
	while (n >= l2 && i < (l2 + l1))
		s[i++] = s2[x++];
	s[i] = '\0';
	return (s);
}
