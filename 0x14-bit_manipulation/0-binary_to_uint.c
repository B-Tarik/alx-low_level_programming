#include "main.h"
/**
 * binary_to_uint
 * @b:
 * Return:
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int x = 0;

	if (b[x] == '\0')
	{
		return (0);
	}

	while ((b[x] == '0') || (b[x] == '1'))
	{
		num <<= 1;
		num += b[x] - '0';
		x++;
	}

	return (num);
}
