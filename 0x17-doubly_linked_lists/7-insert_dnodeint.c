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

	if (h == NULL)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		node->prev = NULL;
		node->next = *h;
		if (*h != NULL)
			(*h)->prev = node;
		*h = node;
		return (*h);
	}
	tra = *h;
	while (tra && i != idx - 1)
	{
		tra = tra->next;
		i++;
	}
	if (i == idx - 1 && tra)
	{
		node->prev = tra;
		node->next = tra->next;
		if (tra->next)
			tra->next->prev = node;
		tra->next = node;
		return (*h);
	}
	free(node);
	return (*h);
}
