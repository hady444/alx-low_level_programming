#include "lists.h"
/**
 * dlistint_len - count size of list
 * @h: pointer to list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *travers;
	size_t s = 0;

	travers = h;
	while (travers)
	{
		travers = travers->next;
		s++;
	}
	return (s);
}
