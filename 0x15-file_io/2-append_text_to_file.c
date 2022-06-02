#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure; If filename is NULL return -1
 * If text_content is NULL, do not add anything to the file. Return 1 if
 * the file exists and -1 if the file does not exist
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, file;

	file = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (file = 0; text_content[file];)
			file++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, file);

	if (o == -1 || w == -1)
	{
		return (-1);
	}
	close(0);

	return (1);
}
