#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - add node to head with value n
 * @head: pointer to pointer to first element of list
 * @n: the value to set in new node
 * Return:
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return(*head);
}
