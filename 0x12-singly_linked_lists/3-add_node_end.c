#include "lists.h"
/**
 * add_node_end - function that adds a new node at
 * the end of a list_t list.
 * @head: pointer to struct
 * @str: pointer to string
 * Return: the number of nodes
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *end;


	ptr = (list_t *) malloc(sizeof(list_t));
	if (!ptr)
	{
		return (NULL);
	}
	if ((!str))
	{
		free(ptr);
		return (NULL);
	}

	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = NULL;
	if (!(*head))
		*head = ptr;
	else
	{
		end = *head;
		while (end->next)
		{
			end = end->next;
		}
		end->next = ptr;
	}

	return (*head);
}
