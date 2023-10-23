#include "lists.h"

/**
 * sum_listint - get sum of all int 'n' of 'listint_t'
 * @head: pointer to head
 * Return: sum of all int 'n'
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *current;

	for (sum = 0, current = head; current != NULL; current = current->next)
		sum += current->n;

	return (sum);
}
