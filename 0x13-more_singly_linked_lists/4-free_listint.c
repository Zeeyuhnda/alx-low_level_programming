#include "lists.h"

/**
 * free_listint - free a listint_t
 * @head: head of a linked list
 */

void free_listint(listint_t *head)
{
	listint_t *hold;

	while (head != NULL)
	{
		hold = head;
		head = head->next;
		free(hold);
	}
}
