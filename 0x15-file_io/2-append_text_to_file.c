#include "holberton.h"

int _strlen(char *string);

/**
 *append_text_to_file - creates a file with certain content
 *@filename: the name of the file to create
 *@text_content: the content of the file
 *Return: a
 */

int append_text_to_file(const char *filename, char *text_content)
{

	int fd, len;

	if (text_content == NULL)
	{
		fd = open(filename, O_APPEND | O_WRONLY, 0600);
		return (1);
	}

	if (filename == NULL)
	{
		return (-1);
	}

	len = _strlen(text_content);

	fd = open(filename, O_APPEND | O_WRONLY, 0600);

	if (fd == -1)
	{
		return (-1);
	}

	write(fd, text_content, len);

	close(fd);

	return (1);
}

/**
 *_strlen - returns amount of characters
 *@string: string to check
 *Return: return
 */
int _strlen(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
	}
	return (i);
}
