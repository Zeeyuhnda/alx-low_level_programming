#include "lists.h"

/**
 * get_nodeint_at_index - get the nth node of listint_t
 * @head: pointer to head node
 * @index: index to find linked list, starts @0
 * Return: pointer to node or NULL if failed
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int count;

	current = head;
	count = 0;
	while (count < index)
	{
		if (current)
			current = current->next;
		else
			return (NULL);
		count++;
	}

	if (current)
		return (current);
	else
		return (NULL);
}
