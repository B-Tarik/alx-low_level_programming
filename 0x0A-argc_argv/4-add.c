#include <stdio.h>
/**
 * main - a program that multiplies two arguments passed into it
 * @argc: count
 * @argv: array of pointer
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int m;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		m = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", m);
	}
}
