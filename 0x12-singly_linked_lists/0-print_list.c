#include "lists.h"
/**
 * print_list - print values of list
 * @h: pointer to a list
 * Return: size_t of list
 */
size_t print_list(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		if (!(h->str))
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		size++;
	}
	return (size);
}
