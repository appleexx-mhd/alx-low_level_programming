#include "lists.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: char
 *
 * Return: On Success 1.
 * On error, -1 is returned, and errno is set appropriaTELY.
 */
int _putchar(char c)
{
	return (write(1,&c,1));
}
