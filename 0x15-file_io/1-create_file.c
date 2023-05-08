#include "main.h"
/**
 * create_file - function that create a file
 * @filename: the name if the file to be created
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 On success, or -1 On failure
 */
int create_file(const char *filename, char *text_content)
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
	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	context = write(file, text_content, i);
	if (file == -1 || context == -1)
		return (-1);
	close(file);
	return (1);
}
