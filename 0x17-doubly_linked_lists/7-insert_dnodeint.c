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
	while (tra)
	{
		if (i == idx)
		{
			node->prev = tra->prev;
			node->next = tra;
			tra->prev->next = node;
			tra->prev = node;
			break;
		}
		tra = tra->next;
		i++;
	}
	return (*h);
}
