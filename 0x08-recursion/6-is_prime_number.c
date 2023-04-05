#include "main.h"
int prime(int n, int x);

/**
 * is_prime_number - function that returns 1 if the input is prime number
 * @n: input
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));
}
/**
 * prime - calculates if the number is prime recursively
 * @n: input
 * @x: input
 * Return: 1 or 0
 */
int prime(int n, int x)
{
	if (x == 1)
		return (1);
	if (n % x == 0 && x > 0)
		return (0);
	return (prime(n, x - 1));
}
