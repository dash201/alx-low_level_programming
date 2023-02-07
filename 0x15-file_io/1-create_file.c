#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>

/**
 *_strlen -  returns the length of a string
 *@s: parameter
 *Return: length of a string
*/
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
/**
 *create_file - this function create a file
 *@filename: name of file
 *@text_content: is a NULL terminated string
 *Return: 1 or -1
*/
int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t w;
	int new_file;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	file = open(filename, O_RDWR | O_TRUNC);
	if (file == 0)
	{
		w = write(file, text_content, _strlen(text_content));
		if (w < 0)
			return (-1);
		return (1);
	}
	new_file = creat(filename, 0600);
	if (new_file < 0)
		return (-1);
	file = open(filename, O_WRONLY);
	w = write(file, text_content, _strlen(text_content));
	if (w < 0)
		return (-1);
	return (1);

}
