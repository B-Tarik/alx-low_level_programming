#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers
 * Return: 0 always.
 */
int main(void)
{
	int prev = 1, curr = 2;
	printf("%d, %d, ", prev, curr);

	for (int i = 3; i <= 98; i++)
	{
		int next = prev + curr;
		printf("%d", next);
		if (i < 98)
		{
			printf(", ");
		}
		prev = curr;
		curr = next;
	}

	printf("\n");

	return (0);
}
