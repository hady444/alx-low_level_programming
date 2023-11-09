#include "lists.h"
/**
 * print_dlistint - print elements in linked list
 * @h: pointer to list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *travers;
	size_t s = 0;

	travers = h;
	while (travers)
	{
		printf("%d\n", travers->n);
		travers = travers->next;
		s++;
	}
	return (s);
}
