#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: pointer
 * Return: length of Elements
*/
size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *ptr = NULL;
	if (!h)
	{
		return (0);
	}

	ptr = h;

	while (ptr != NULL)
	{
		if (!ptr->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d]%s\n", ptr->len, ptr->str);
		}
		ptr = ptr->next;
		count++;
	}
	return (count);
}
