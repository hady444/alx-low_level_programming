#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at index
 * @head: point to head
 * @index: index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *node = *head;

	if (!head || !(*head))
		return (-1);
	if (index == 0)
	{
		*head = node->next;
		if (*head)
			(*head)->prev = NULL;
		free(node);
		return (1);
	}
	while (node && i < index)
	{
		node = node->next;
		i++;
	}

	if (node)
	{
		node->prev->next = node->next;
		if (node->next)
			node->next->prev = node->prev;
		free(node);
		return (1);
	}
	return (-1);
}
