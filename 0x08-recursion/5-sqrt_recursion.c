#include "main.h"
int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - function that returns the natural square root of number
 *@n: input
 *Return: result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - find the natural square root
 * @n: input
 * @x: iterator
 *
 * Return: result
 */
int actual_sqrt_recursion(int n, int x)
{
	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (x);
	return (actual_sqrt_recursion(n, x + 1));
}
