#include "lists.h"
#include <stdio.h>
size_t listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * print_listint_safe - prints a listint list safely
 * @head: a pointer to the head of the listint_t list
 * Return: The number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, i = 0;

	nodes = listint_len(head);
	if (nodes == 0)
	{
		for (nodes = 0 ; head != NULL ; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	} else
		{
			for (i = 0 ; i < nodes ; i++)
			{
				printf("[%p] %d\n", (void *)head, head->n);
				head = head->next;
			}
			printf("->[%p] %d\n", (void *)head, head->n);
		}
	return (nodes);
	}
/**
 * listint_len - count the number of unique nodes in a looped
 * listint_linked list
 * @head: a pointer to the head of listint_t to check
 * Return: if the` list is not looped - 0
 * Otherwise - the number of unique nodes in the list
 */

size_t listint_len(const listint_t *head)
{
	const listint_t *mid, *h;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	mid = head->next;
	h = (head->next)->next;
	while (h)
	{
		if (mid == h)
		{
			mid = head;
			while (mid != h)
			{
				nodes++;
				mid = mid->next;
				h = h->next;
			}
			mid = mid->next;
			while (mid != h)
			{
				nodes++;
				mid = mid->next;
			}
			return (nodes);
		}
		mid = mid->next;
		h = (h->next)->next;
	}

	return (0);
}
