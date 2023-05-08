#include "main.h"
#include <stdlib.h>
/**
 * read_textfile
 * @filename:
 * @letters:
 * Return:
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		return (0);
	}

	r = read(o, buf, letters);
	o = open(filename, O_RDONLY);
	w = write(STDOUT_FILENO, buf, r);

	if (r == -1 || o == -1 || w == -1 || w != r)
	{
		free(buf);
		{
			return (0);
		}
	}

	free(buf);
	close(o);

	return (w);
}
