#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add toghether for size
 * @s1: input one to concat
 * @s2: input two to camcat
 * Return: result of concat
 */
char *str_concat(char *s1, char *s2)
{
	char *c;
	int i = 0;
	int x = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[x] != '\0')
		x++;
	c = malloc(sizeof(char) * (i + x + 1));

	if (c == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		c[i] = s1[i];
		i++;
	}
	x = 0;
	while (s2[x] != '\0')
	{
		c[i] = s2[x];
		i++;
		x++;
	}
	c[i] = '\0';
	return (c);

}
