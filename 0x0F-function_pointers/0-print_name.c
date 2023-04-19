#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - print a name using function to pointer
 * @name: input
 * @f: function pointer
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
