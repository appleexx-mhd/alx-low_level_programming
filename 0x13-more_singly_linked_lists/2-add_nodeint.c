#include "lists.h"
/**
 * add_nodeint - add a new node at the beginning of the linked list
 * @head: pointer to the first node
 * @n: data to insert that new node
 * Return: pointer to the new node, or NULL if its fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
