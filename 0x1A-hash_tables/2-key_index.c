#include "hash_tables.h"

/**
 * key_index - Get the index at which key/value pair should be stored in array
 * of the hash table
 * @key: key to get the index of
 * @size: size of the array of hash table
 * Return: index of the key
 * Description: Uses the djb2 algorithm
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
