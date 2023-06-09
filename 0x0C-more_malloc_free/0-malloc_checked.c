#include "main.h"
#include <stdio.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: size
 * Return: pointer to allocated memory or exit with 98
 **/
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
