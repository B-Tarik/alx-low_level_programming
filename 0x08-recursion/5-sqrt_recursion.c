#include "main.h"
/**
 * sqrt2
 * @a:
 * @b:
 * Return:
 */
int sqrt2(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt2(a, b + 1));
}
/**
 * _sqrt_recursion
 * @n:
 * Return:
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
