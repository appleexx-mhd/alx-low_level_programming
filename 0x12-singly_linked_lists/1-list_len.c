#include "lists.h"
#include <stddef.h>
/**
 * list_len - return the number of element in a linked list.
 * @h: pointer to the list_t list
 *
 * Return: number of element in h
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
