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

	p = malloc(sizeof(listint_t));
	if (!p)
		return (NULL);
	p->n = n;
	h = *head;
	if (idx == 0)
	{
		p->next = h;
		h = p;
		return (p);
	}
	i = 0;
	while (i < idx - 1)
	{
		if ((*head) == NULL)
			return (NULL);
		h = h->next;
		i++;
	}
	p->next = h->next;
	h->next = p;
	return (p);
}
