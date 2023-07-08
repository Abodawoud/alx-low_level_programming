#include "hash_tables.h"
#include <stdbool.h>
/**
 * hash_table_print - that prints a hash table.
 * @ht: The size of the array.
 * Return: Nothing
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *curr;
	hash_node_t *free_me;

	if (ht == NULL)
		return;
	for (index = 0; index < ht->size; index++)
	{
		curr = ht->array[index];
		while (curr != NULL)
		{
			free_me = curr;
			curr = curr->next;
			free(free_me->key);
			free(free_me->value);
			free(free_me);
		}
		free(ht->array[index]);
	}
	free(ht->array);
	free(ht);
}
