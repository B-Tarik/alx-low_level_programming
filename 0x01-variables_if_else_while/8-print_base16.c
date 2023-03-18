#include <stdio.h>
/**
 * main - main block
 * print all numbers of base64 in lowercase.
 * Return: 0
 */
int main(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i += 1)
	{
		putchar(i + '0');
	}
	for (c = 'a'; c < 'g'; c += 1)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
