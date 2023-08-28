#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - free list
 * @head: pointer to head of list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!head)
		return;
	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	head = NULL;
}
