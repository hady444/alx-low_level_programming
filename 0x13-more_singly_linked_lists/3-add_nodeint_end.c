#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - add node to end of list with value n
 * @head: pointer to pointer to first element of list
 * @n: the value to set in new node
 * Return: pointer to added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *first;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!*head)
		*head = new;
	else
	{
		first = *head;
		while (first->next != NULL)
			first = first->next;
		first->next = new;
	}
	return (*head);
}
