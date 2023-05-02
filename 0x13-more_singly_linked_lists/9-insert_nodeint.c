#include "lists.h"
/**
 * insert_nodeint_at_index -  function that inserts a new node at
 * a given position.
 * @head: pointer to struct
 * @idx: index of the list
 * @n: pointer to struct
 * Return: the address of the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p;
	listint_t *h;
	unsigned int i;

	h = *head;
	i = 0;
	if (idx)
	{
		while (i < idx - 1 && h != NULL)
		{
			h = (*head)->next;
			i++;
		}
	}

	if (h == NULL && idx != 0)
		return (NULL);
	p = malloc(sizeof(listint_t));
	if (!p)
		return (NULL);
	p->n = n;
	if (idx == 0)
	{
		p->next = *head;
		*head = p;
	}
	else
	{
		p->next = h->next;
		h->next = p;
	}
	return (p);
}
