#include "lists.h"
/**
 * get_dnodeint_at_index - access node with index
 * @head: head of node
 * @index: index needed
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	int i = 0;
	dlistint_t *node;

	node = head;
	while (node)
	{
		if (i == index)
			return (node);
		node = node->next;
		i++;
	}
	return (NULL);
}
