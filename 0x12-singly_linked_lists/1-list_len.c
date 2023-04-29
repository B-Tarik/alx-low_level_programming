#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "lists.h"
/**
 * list_len 
 * @h: 
 * Return: 
 */
size_t list_len(const list_t *h)
{
	size_t n;
	n = 0;
	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
