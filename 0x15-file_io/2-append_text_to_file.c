#include "main.h"
/**
 * append_text_to_file - function that append text at the end of a file
 * @filename: the name of the file
 * @text_content: is the NULL termineted string to add at the endof the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int context;
	int i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;
	}
	file = open(filename, O_WRONLY | O_APPEND);
	context = write(file, text_content, i);
	if (file == -1 || context == -1)
		return (-1);
	close(file);
	return (1);
}
