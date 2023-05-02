#include "lists.h"
/**
 * get_nodeint_at_index - unction that deletes the head node of a
 * listint_t linked list
 * @head: pointer to struct
 * Return: the head node’s data (n).
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

	if (!h)
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
