#include <stdio.h>
#include "main.h"
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * append_text_to_file
 * @filename:
 * @text_content:
 * Return:
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, lenght;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		o = open(filename, O_WRONLY | O_APPEND);
		if (o == -1)
		{
			return (-1);
		}
		lenght = 0;
		while (*(text_content + lenght) != '\0')
		{
			lenght++;
		}
		w = write(o, text_content, lenght);
		if (w == -1)
		{
			close(o);
			write(STDOUT_FILENO, "fails", 5);
			return (-1);
		}
	}
	close(o);
	return (1);
}
