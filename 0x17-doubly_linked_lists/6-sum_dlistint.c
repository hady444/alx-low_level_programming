#include "lists.h"
/**
 * sum_dlistint - sum the list integers
 * @head: head of list
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node;
	int sum = 0;

	if (!head)
		return (sum);
	node = head;
	while (node)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
