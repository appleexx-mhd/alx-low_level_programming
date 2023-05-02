#include "lists.h"
/**
 * sum_listint - calculate the sum of all the data in linked list
 * @head: first node in the linked list
 * Return: result of the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		sum = sum + tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}

