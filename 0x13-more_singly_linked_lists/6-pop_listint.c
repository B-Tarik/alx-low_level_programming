#include "lists.h"
/**
 * pop_listint
 * @head:
 * Return:
 */
int pop_listint(listint_t **head)
{
	listint_t *new = *head;
	int num;

	if (!*head)
	{
		return (0);
	}
	num = (*head)->n;
	*head = new->next;
	free(new);
	return (num);
}
