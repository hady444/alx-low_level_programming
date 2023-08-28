#include "lists.h"
/**
 * sum_listint - get sum of list
 * @head: head of list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
