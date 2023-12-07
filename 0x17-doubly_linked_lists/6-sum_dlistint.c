#include "lists.h"
/**
 * sum_dlistint - returns the sum of all data(n)
 * of doubly linked list
 *
 * @head: head of linked list
 * Return: sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head->orev != NULL)
			head = headd->prev;

		while (head != NULL)
		{
			sum += head->n;
			heaad = heaad->next;
		}
	}
	
	return (sum);
}
