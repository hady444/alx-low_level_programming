#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - insert node ar passed index
 * @head: pointer to head
 * @index: index passed
 * Return: 1, or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *deleted;
	listint_t *travers;
	unsigned int i;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		deleted = *head;
		*head = (*head)->next;
		free(deleted);
		return (1);
	}
	i = 0;
	travers = *head;
	while (i < (index-1))
	{
		if (!travers->next)
			return (-1);
		travers = travers->next;
		i++;
	}
	deleted = travers->next;
	travers->next = deleted->next;
	free(deleted);
	return (1);
}
