#include "holberton.h"
int _strlen(char *string);

/**
 *create_file - creates a file with certain content
 *@filename: the name of the file to create
 *@text_content: the content of the file
 *Return: a
 */

int create_file(const char *filename, char *text_content)
{

	int fd, len;

	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}

	len = _strlen(text_content);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

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
