#include "main.h"
/**
 * _strspn - function that gets the lenght of prefix substring
 * @s: input
 * @accept: input
 * Return: Always 0(Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int k = 0;
	int x = 0;

	while (*s)
	{
		while (accept[x])
		{
			if (*s == accept[x])
			{
				k++;
				break;
			}
			else if (accept[x + 1] == '\0')
			{
				return (k);
			}
			x++;
		}
		s++;
	}
	return (k);
}
