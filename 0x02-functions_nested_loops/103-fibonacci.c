#include <stdio.h>
/**
 * main - fibonacci, prints the sum of the even-valued terms
 * Return: 0 always.
 */
int main(void)
{
	int prev = 1, curr = 2, sum = 0;

	while (curr <= 4000000)
	{
		if (curr % 2 == 0)
		{
			sum += curr;
		}
		int temp = curr;
		curr += prev;
		prev = temp;
	}

	printf("%d\n", sum);

	return (0);
}
