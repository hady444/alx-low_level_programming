#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: head node
 * Return:returns the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int r = 0;
	listint_t *tmp;

	if (!*head)
		return (0);
	r = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return (r);
}
