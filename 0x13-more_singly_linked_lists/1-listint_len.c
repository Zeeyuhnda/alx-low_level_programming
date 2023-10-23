#include "lists.h"

/**
 * listint_len - find num of elements in 'listint_t'
 * @h: linked list head
 * Return: num of elements in linked list
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *c;
	size_t count;

	for (c = h, count = 0; c != NULL; count++, c = c->next)
		;

	return (count);
}
