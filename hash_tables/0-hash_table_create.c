#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
*hash_table_create - creates a hash table
*@size: parameter
*Return: a pointer to the newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htable;
	unsigned long int i;

	htable = malloc(sizeof(hash_table_t));
	if (htable == NULL)
	{
		return (NULL);
	}
		htable->array = malloc(sizeof(hash_table_t *) * size);
	if (htable->array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		htable->array[i] = NULL;
		htable->size = size;
	}
	return (htable);
}
