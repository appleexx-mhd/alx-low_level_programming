#include "main.h"
/**
 * _memcpy - function that copy memory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * @n: number of bytes
 *
 * Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int x = n;

	for (i = 0 ; x > i ; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
