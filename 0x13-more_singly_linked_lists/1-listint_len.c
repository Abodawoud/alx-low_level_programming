#include "lists.h"
/**
 * listint_len - function that returns the number of elements in a
 * linked listint_t list.
 * @h: pointer to struct
 * Return: the number of nodes
*/
size_t listint_len(const listint_t *h)
{
	int i = 0;
	const listint_t *p = NULL;

	p = h;
	while (p != NULL)
	{
		p = p->next;
		i++;
	}
	return (i);
}
