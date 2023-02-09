#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
/**
 *main - copy content file in another file
 *@argc: first parameter
 *@argv: second parameter
 *Return: 0
*/
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int file_from, file_to, new_file;
	ssize_t r, w;
	char *rd;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	rd = malloc(sizeof(char) * 1024);
	file_from = open(argv[1], O_RDONLY);
	r = read(file_from, rd, 1024);
	if (file_from < 0 || r < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_TRUNC);
	if (file_to < 0)
	{
		new_file = creat(argv[2], 0661);
		file_to = open(argv[2], O_WRONLY);
	}
	w = write(file_to, rd, r);
	if (new_file < 0 || w < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	free(rd);
	if (close(file_from) < 0 || close(file_to) < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_from || file_to);
		exit(100);
	}
	return (0);
}
