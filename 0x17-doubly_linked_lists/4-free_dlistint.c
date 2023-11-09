#include "lists.h"
/**
 * free_dlistint - free the list from memory
 * @head: pointer to head of list
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	
	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
