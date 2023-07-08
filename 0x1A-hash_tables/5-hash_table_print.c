#include "hash_tables.h"
#include <stdbool.h>
/**
 * hash_table_print - that prints a hash table.
 * @ht: The size of the array.
 * Return: Nothing
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *curr;
	bool item = true;

	if (ht == NULL)
		return;
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		curr = ht->array[index];
		while (curr)
		{
			if (item)
			{
				printf("'%s': '%s'", curr->key, curr->value);
				item = false;
			}
			else
				printf(", '%s': '%s'", curr->key, curr->value);
			curr = curr->next;
		}
	}
	printf("}\n");
}
