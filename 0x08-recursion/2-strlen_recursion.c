#include "main.h"
/**
 * _strlen_recursion - function that print the length of string
 * @s: input
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len = len + _strlen_recursion(s + 1);
	}
	return (len);
}
