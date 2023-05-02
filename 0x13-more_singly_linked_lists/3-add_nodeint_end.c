#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at
 * the end of a listint_t list.
 * @head: pointer to struct
 * @n: data to put it in node
 * Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p = NULL;
	listint_t *new;

	p = malloc(sizeof(listint_t));
	if (!p)
		return (NULL);

	p->n = n;
	p->next = NULL;
	if (*head == NULL)
	{
		*head = p;
		return (p);
	}
	new = *head;
	while (new->next != NULL)
	{
		new = new->next;
	}
	new->next = p;
	return (p);
}
