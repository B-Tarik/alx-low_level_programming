#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * num_checker
 * @a:
 * Return:
 **/
int num_checker(char *a)
{
	int i, num, len;

	i = 0;
	num = 0;
	len = strlen(a);
	while (i < len)
	{
		if (a[i] > '9' || a[i] < '0')
		{
			return (-1);
		}
		else
			num = num * 10 + (a[i] - '0');
		i++;
	}
	return (num);
}
/**
 * main
 * @argc:
 * @argv:
 * Return:
 **/
int main(int argc, char *argv[])
{
	int i, num, sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		num = num_checker(argv[i]);
		if (num == -1)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
