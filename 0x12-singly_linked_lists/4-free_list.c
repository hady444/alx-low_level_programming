#include "lists.h"
/**
 * free_list - delete list
 * @head: points to first node
 */
void free_list(list_t *head)
{
	list_t *s;

	while (head)
	{
		s = head->next;
		free(head->str);
		free(head);
		head = s;
	}
}
