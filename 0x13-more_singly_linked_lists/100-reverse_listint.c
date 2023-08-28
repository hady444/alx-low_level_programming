#include "lists.h"
/**
 * reverse_listint - reverse list
 * @head: pointer to head
 * Return: revesed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp1, *tmp2;

	if (!*head || !head)
		return (NULL);
	tmp1 = NULL;
	while ((*head)->next != NULL)
	{
		tmp2 = (*head)->next;
		(*head)->next = tmp1;
		tmp1 = *head;
		*head = tmp2;
	}
	(*head)->next = tmp1;
	return (*head);
}
