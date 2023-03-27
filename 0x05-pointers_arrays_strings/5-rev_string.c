#include "main.h"
/**
 * rev_string - a function that reverse string
 * @s: Input string
 * Return: reverse a string
 */
void rev_string(char *s)
{
	char res = s[0];
	int i = 0;
	int x;

	while (s[i] != '\0')
	{
		i++;
	}
	for (x = 0 ; x < i ; x++)
	{
		i--;
		res = s[x];
		s[x] = s[i];
		s[i] = res;
	}
}
