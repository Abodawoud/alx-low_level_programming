#include "hash_tables.h"
#include <stdbool.h>
/**
 * hash_table_delete - that delete a hash table.
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
		while (curr)
		{
			free_me = curr->next;
			free(curr->key);
			free(curr->value);
			free(curr);
			curr = free_me;
		}
		if (curr)
		{
			ht->array[index] = NULL;
		}
	}
	free(ht->array);
	free(ht);
}
