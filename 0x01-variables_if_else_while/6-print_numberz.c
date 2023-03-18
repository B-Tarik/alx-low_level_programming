#include <stdio.h>
/**
 * main - main block
 * print all numbers of base 10, starting from 0.
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i += 1)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}
