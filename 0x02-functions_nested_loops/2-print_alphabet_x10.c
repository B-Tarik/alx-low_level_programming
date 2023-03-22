#include "main.h"
/**
 * main - Entry point
 * print
 * Return: nothing, return void
 */
void print_alphabet_x10(void)
{
  int a;
  int count;

  count = 0;
  while (count < 10)
  {
    for (a = 'a'; a <= 'z'; a++)
    {
      _putchar(a);
    }

    count++;
    _putchar('\n');
  }
}