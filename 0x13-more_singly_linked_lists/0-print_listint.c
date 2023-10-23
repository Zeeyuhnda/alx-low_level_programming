#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of list
 * @h: head of list
 * Return: num of nodes
 */

size_t print_listint(const listint_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
