#include "lists.h"
/**
 * get_nodeint_at_index -  function that returns the nth node of a
 * listint_t linked list
 * @head: pointer to struct
 * @index: index of the list
 * Return: the address of the new node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (i < index)
	{
		if (head == NULL || head->next == NULL)
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}
