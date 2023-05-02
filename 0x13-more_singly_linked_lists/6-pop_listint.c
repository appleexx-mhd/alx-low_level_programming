#include "lists.h"
/**
 * pop_listint - deletes the head node of a liked list
 * @head: pointer to the first element int the linked list
 * Return: the head node's data (n)
 */
int pop_listint (listint_t **head)
{
	listint_t *tmp;
	int nb;

	if (!head || !*head)
		return (0);
	nb = (*head)->n;
	tmp = (*head)->next;
	free (*head);
	*head = tmp;
	return (nb);
}
