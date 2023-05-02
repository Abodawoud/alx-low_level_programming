#include "lists.h"
/**
 * pop_listint - unction that deletes the head node of a
 * listint_t linked list
 * @head: pointer to struct
 * Return: the head node’s data (n).
*/
int pop_listint(listint_t **head)
{
	listint_t *p;
	int number;

	if (!head)
	{
		return (0);
	}
	number = (*head)->n;
	p = (*head)->next;
	free(*head);
	*head = p;
	return (number);
}
