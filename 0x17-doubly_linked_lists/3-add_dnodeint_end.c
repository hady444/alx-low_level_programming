#include "lists.h"
/**
 * add_dnodeint_end - add node to end of list
 * @head: pointer to head of list
 * @n: int value in node
 * Return: list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *travers;

	node = malloc(sizeof(dlistint_t *));
	node->next = NULL;
	node->n = n;
	travers = *head;
	while (travers)
	{
		travers = travers->next;
	}
	node->prev = travers;
	travers->next = node;
	return (*head);
}
