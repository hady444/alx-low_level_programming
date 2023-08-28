#include "lists.h"
/**
 * reverse_listint - reverse list
 * @head: pointer to head
 * Return: revesed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp1, *tmp2;

	tmp2 = (*head)->next;
	while (tmp2 != NULL)
	{
		tmp1 = *head;
		*head = tmp2;
		tmp2 = tmp2->next;
		(*head)->next = tmp1;
	}
	return (*head);
}
