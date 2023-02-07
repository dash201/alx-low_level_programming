#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
/**
 *read_textfile - reads a text file and prints it to the POSIX standard output
 *@filename: name of file
 *@letters: number of letters
 *Return: the actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t r;
	char *c;
	ssize_t i;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file < 0)
		return (0);
	c = malloc(sizeof(char) * letters);
	r = read(file, c, letters);
	if (r < 0)
		return (0);
	for (i = 0; i < r; i++)
	{
		_putchar(c[i]);
	}
	free(c);
	return (r);
}
