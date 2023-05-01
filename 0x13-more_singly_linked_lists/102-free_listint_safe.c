#include "lists.h"
/**
 * free_listint_safe
 * @h:
 * Return:
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t i = 0;

	tmp = *h;
	if (h == NULL)
	{
		return (i);
	}
	while (tmp)
	{
		if (tmp <= tmp->next)
		{
			free(tmp);
			i++;
			break;
		}
		*h = tmp->next;
		free(tmp);
		tmp = *h;
		i++;
	}
	*h = NULL;
	return (i);
}
