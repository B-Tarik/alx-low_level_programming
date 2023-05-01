#include "lists.h"
/**
 * print_listint_safe 
 * @head: 
 * Return:
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	const listint_t *tmp, *node;

	node = head;
	while (node != NULL)
	{
		printf("[%p] %d\n", (void *)node, node->n);
		tmp = node;
		node = node->next;
		i++;
		if (node >= tmp)
		{
			printf("-> [%p] %d\n", (void *)node, node->n);
			break;
		}
	}
	return (i);
}