#include "lists.h"
/**
 * add_dnodeint - add node to the beginning
 * @head: pointer to head of list
 * @n: int value assigned to new node
 * Return: new list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t *));
	if (!node)
		return (NULL);
	node->prev = NULL;
	node->n = n;
	node->next = *head;
	if (*head != NULL)
		(*head)->prev = node;
	*head = node;
	return (*head);
}
