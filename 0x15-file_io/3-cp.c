#include "main.h"
#include <stdio.h>
char *create_buff(char *file);
void _close(int file_des);
/**
 * main - copies the contents of a file into another file
 * @argc: number of arguments supplied to the program.
 * @argv: array of pointers to the arguments
 * Return: 0 on seccuss.
 */
int main(int argc, char *argv[])
{
	int fr;
	int output;
	int wr;
	int rd;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = create_buff(argv[2]);
	fr = open(argv[1], O_RDONLY);
	rd = read(fr, buff, 1024);
	output = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (fr == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		wr = write(output, buff, rd);
		if (output == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		rd = read(fr, buff, 1024);
		output = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);
	free(buff);
	_close(fr);
	_close(output);
	return (0);
}
/**
 * create_buff - allocates 1024 bytes for a buffer
 * @file: name of the file
 * Return: pointer to the new allocated buffer
 */
char *create_buff(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buf);
}
/**
 * _close - function that close files
 * @file_des: a file to be closed
 */
void _close(int file_des)
{
	int ch;

	ch = close(file_des);
	if (ch == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_des);
		exit(100);
	}
}
