#include"stdlib.h"
#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name -
 * @name:
 * @f:
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
