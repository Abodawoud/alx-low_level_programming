#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list
 * @head: pointer to struct
 * Return: Void
*/
void free_listint2(listint_t **head)
{
	listint_t *p, *n;

	n = *head;
	while (n)
	{
		p = (*head)->next;
		free(*head);
		*head = p;
	}
	head = NULL;
}
