#include "lists.h"
/**
 * free_list - delete list
 * @head: points to first node
 */
void free_list(list_t *head)
{
	list_t *s, *del;

	s = head->next;
	free(head);
	while (s->next)
	{
		del = s;
		s = s->next;
		free(del);
	}
	free(s);
}
