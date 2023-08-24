#include "lists.h"
#include <string.h>
/**
 * add_node_end - add node in head position
 * @head: pointer to pointer to the value contining the list head address
 * @str: is a string given to new which would be allocated in head position
 * Return: addess of new head (NULL if failed)
 */
list_t *add_node_end(list_t **head, const char *str);
{
	char *s = strdup(str);
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (s == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = s;
	new->len = strlen(s);
	new->next = NULL;
	if (!head)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
