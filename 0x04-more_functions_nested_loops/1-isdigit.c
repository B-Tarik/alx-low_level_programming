#include "main.h"
/**
 * _isdigit - checks if  number between 0 to 9.
 * @c: int input.
 * Return: 1 or 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
