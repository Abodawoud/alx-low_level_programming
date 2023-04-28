#include "lists.h"
/**
 * add_node - function that adds a new node
 * at the beginning of a list_t list.
 * @head: pointer to struct
 * @str: pointer to string
 * Return: the number of nodes
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = NULL;


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
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
