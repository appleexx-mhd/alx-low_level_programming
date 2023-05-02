#include "lists.h"
/**
 * print_listint - prints all element of linked list
 * @h: linked list of type listint_t to print
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nb = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nb++;
		h = h->next;
	}
	return (nb);
}
