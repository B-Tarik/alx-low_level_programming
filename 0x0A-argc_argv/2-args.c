#include <stdio.h>
/**
 * main - program that prints all arguments it receives
 * @argc: count
 * @argv: array of pointers
 * Return: 0
 **/
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
