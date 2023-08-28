#include "lists.h"
/**
 * get_nodeint_at_index - get n-th node of list
 * @head: head of list
 * @index: index required
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		if (!head)
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}
