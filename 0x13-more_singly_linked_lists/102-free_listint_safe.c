#include "lists.h"

/**
 * free_listint_safe - free listint_t lsit & set head to null
 * @h: double pointer to head of linked list
 * Description: fucntion should work for circular lists
 * only loops through once
 * Return: size of the list tha was free'd
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *hold;
	size_t count;

	count = 0;
	current = *h;
	while (current != NULL)
	{
		count++;
		hold = current;
		current = current->next;
		free(hold);

		if (hold < current)
			break;
	}
	*h = NULL;

	return (count);
}
