#include "lists.h"
/**
 * free_listint_safe - fress a linked list
 * @h: pointer to the first node in the linked list
 * Return: number of element in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t l = 0;
	int def;
	listint_t *tmp;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		def = *h - (*h)->next;
		if (def > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			l++;
		}
		else
		{
			free(*h);
			*h = NULL;
			l++;
			break;
		}
	}
	*h = NULL;
	return (l);
}
