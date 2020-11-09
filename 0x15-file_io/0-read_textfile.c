#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 *read_textfile - reads and prints
 *@filename: file name
 *@letters: number of letters
 *Return: amout of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd, i, len;
	char *buf;

	buf = malloc(letters + 1);

	fd = open(filename, O_RDONLY, 0600);

		if (fd == -1)
		{
			return (1);
		}

		len = read(fd, buf, letters);

		i = write(1, buf, len);

		close(fd);

		return (i);
}
