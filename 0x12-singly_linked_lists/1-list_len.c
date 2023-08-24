#include "lists.h"
/**
 * list_len - list length
 * @h: pointer to a list
 * Return: size_t of list
 */
size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		h = h->next;
		size++;
	}
	return (size);
}
