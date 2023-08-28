#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - insert node ar passed index
 * @head: head of list
 * @idx: index passed
 * @n: value of n
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	unsigned int i;
	listint_t *travers;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		travers = *head;
		new->next = travers;
		*head = new;
		return (new);
	}
	i = 0;
	travers = *head;
	while (i < (idx - 1))
	{
		if (!travers || !travers->next)
		{
			return (NULL);
		}
		travers = travers->next;
		i++;
	}
	new->next = travers->next;
	travers->next = new;
	return (new);
}
