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
 *append_text_to_file - appends text at the end of a file.
 *@filename: name of file
 *@text_content: text to add
 *Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t w;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	file = open(filename, O_WRONLY | O_APPEND);
	if (file < 0)
		return (-1);
	w = write(file, text_content, _strlen(text_content));
	if (w < 0)
		return (-1);
	close(file);
	return (1);
}
