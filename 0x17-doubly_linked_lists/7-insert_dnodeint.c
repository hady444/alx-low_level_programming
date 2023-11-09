#include "lists.h"
/**
 * insert_dnodeint_at_index - insert
 * @h: pointer to head
 * @idx: specified index
 * @n: number reserved in node
 * Return: list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *tra;
	unsigned int i = 0;

	node = malloc(sizeof(dlistint_t *));
	if (node == NULL)
		return (NULL);
	node->n = n;
	tra = *h;
	if (idx == 0)
	{
		node->prev = NULL;
		node->next = tra;
		if (tra != NULL)
			tra->prev = node;
		*h = node;
		return (*h);
	}
	while (tra)
	{
		if (i == idx)
		{
			node->prev = tra->prev;
			node->next = tra;
			tra->prev->next = node;
			tra->prev = node;
			return (*h);
		}
		tra = tra->next;
		i++;
	}
	if (i == idx)
	{
		node->prev = tra->prev;
		node->next = NULL;
		tra->prev->next = node;
		return (*h);
	}
	free(node);
	return (*h);
}
