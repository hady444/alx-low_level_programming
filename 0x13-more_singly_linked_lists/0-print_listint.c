#include "lists.h"
/**
 * print_listint - print all elements in list
 * @h: pointer to list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t elements = 0;

	if (!h)
		return (0);
	do {
		printf("%d\n", h->n);
		h = h->next;
		elements++;
	} while (h);
	return (elements);
}
