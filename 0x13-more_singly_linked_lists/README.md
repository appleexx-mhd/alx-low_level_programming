0x13. C - More singly linked lists:


0-Task:
  Write a function that prints all the elements of a listint_t list.
Prototype: size_t print_listint(const listint_t *h);
Return: the number of nodes
Format: see example
You are allowed to use p



1-Task:
 Write a function that returns the number of elements in a linked listint_t list.
Prototype: size_t listint_len(const listint_t *h);



2-Task:
 Write a function that adds a new node at the beginning of a listint_t list.
Prototype: listint_t *add_nodeint(listint_t **head, const int n);
Return: the address of the new element, or NULL if it failed;


3-Task:
 Write a function that adds a new node at the end of a listint_t list.
Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
Return: the address of the new element, or NULL if it failed;

4-Task:
 Write a function that frees a listint_t list.
Prototype: void free_listint(listint_t *head);


5-Task:
 Write a function that frees a litint_t list.
Prototype: void free_listint2(listint_t **head);
The function sets the head to NULL


6-Task:
 Write a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).
Prototype: int pop_listint(listint_t **head);
if the linked list is empty return 0
