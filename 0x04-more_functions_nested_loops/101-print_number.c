#include <stdio.h>
/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */
void print_number(int n)
{
	int divisor = 1;

	while (n / divisor >= 10 || n / divisor <= -10)
	{
		divisor *= 10;
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (divisor > 0)
	{
		_putchar('0' + n / divisor);
		n %= divisor;
		divisor /= 10;
	}
}
