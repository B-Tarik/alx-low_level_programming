#include <stdio.h>

/**
 * main - Entry point
 * print all possible combinations of two two-digit numbers.
 * Return: Always 0 (Success)
 */

int main(void)
{
  int i, j;
  
  for(i = 0; i < 100; i += 1)
  {
    for(j = 0; j < 100; j += 1)
    {
      if(i <= j)
      {
        putchar(i/10+'0');
        putchar(i%10+'0');
        putchar(' ');
        putchar(j/10+'0');
        putchar(j%10+'0');
        putchar(',');
        putchar(' ');
      }
    }
  }
  return (0);
}
