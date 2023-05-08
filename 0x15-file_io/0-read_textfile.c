#include "main.h"
/**
 * read_textfile - reads a text file and print it to the POSIX
 * standard output
 * @filename: the name of the file descriptor
 * @letters: the number of letters if should read and print
 * Return: the actual number of letters could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r;
	char *arr;
	ssize_t ptr;
	ssize_t output;

	ptr = open(filename, O_RDONLY);
	if (ptr == -1)
		return (0);
	arr = malloc(sizeof(char) * letters);
	r = read(ptr, arr, letters);
	output = write(STDOUT_FILENO, arr, r);
	free(arr);
	close(ptr);
	return (output);
}
