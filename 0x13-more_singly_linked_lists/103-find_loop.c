#include "lists.h"
#include <stdio.h>

/**
 * find_listint_loop - find loop in linked list
 * @head: head of linked list
 * Description: cannot use malloc,
 * free or arrays, can only declare max 2 variables
 * Return: address of node where loop starts, or NULL if none found.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *currents, *currentf;

	if (head == NULL)
		return (NULL);

	currents = currentf = head;
	do {
		if (currents->next)
			currents = currents->next;
		else
			return (NULL);

		if (currentf->next->next)
			currentf = currentf->next->next;
		else
			return (NULL);
	} while (currentf != currents);

	currents = head;
	while (currentf != currents)
	{
		currentf = currentf->next;
		currents = currents->next;
	}

	return (currents);
}
