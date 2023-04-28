#include "lists.h"
/**
 * free_list - function that frees a list_t list.
 * @head: pointer to struct
 * Return: Void
*/
void free_list(list_t *head)
{
	list_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}
