#include "main.h"
int check(char *s, int x, int len);
int lent(char *s);

/**
 * is_palindrome - check if a sting is palindrome
 * @s: string
 * Return: 1 or 0;
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check(s, 0, lent(s)));
}
/**
 * lent - returns the lent of a string
 * @s: input
 * Return: length of the string
 */
int lent(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + lent(s + 1));
}
/**
 * check - check the string recusively
 * @s: input
 * @x: iterator
 * @len: length of string
 * Return: 1 or 0
 */
int check(char *s, int x, int len)
{
	if (s[x] != s[len - 1])
		return (0);
	if (x >= len)
		return (1);
	return (check(s, x + 1, len - 1));
}
