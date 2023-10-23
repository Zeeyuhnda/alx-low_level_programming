#include "lists.h"

/**
 * delete_nodeint_at_index - delete node of listint_t
 * @head: double header to head of linked list
 * @index: index of node to delet, starts @0
 * Return: 1 if success, else -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *hold;
	unsigned int i;

	i = 0;
	current = *head;
	if (*head == NULL)
		return (-1);

	while (i < index)
	{
		i++;
		hold = current;
		if (current->next)
			current = current->next;
		else
			return (-1);
	}

	if (index == 0)
		*head = current->next;
	else if (current->next)
		hold->next = current->next;
	else
		hold->next = NULL;

	free(current);
	return (1);
}
