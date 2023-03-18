#include <stdio.h>

/**
* main - main block
* print combinations of two digit numbers
* Return: Always 0 (Success)
*/
int main(void)
{
  int i, j;

  for (i = 0; i <= 9; i += 1)
    {
      for (j = i + 1; j <= 9; j += 1)
	{
	  putchar(i+'0');
	  putchar(j+'0');

	  if (i < 8)
	    {
	      putchar(',');
	      putchar(' ');
	    }
	}
    }
  putchar('\n');

  return (0);
}
