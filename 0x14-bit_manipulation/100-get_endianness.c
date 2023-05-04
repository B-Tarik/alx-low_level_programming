#include "main.h"
/**
 * get_endianness
 * Return:
 */
int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
	{
		return (1);
	}
	return (0);
}
