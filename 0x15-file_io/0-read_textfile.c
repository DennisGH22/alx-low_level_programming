#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and
 * prints it to the POSIX standard output.
 * @filename: The name of the file read.
 * @letters: The number of letters read in the file.
 *
 * Return: Always 0 (Success).
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, letters_read;
	char *buffer;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
	{
		close(file);
		return (0);
	}

	letters_read = read(file, buffer, letters);
	if (letters_read == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}

	if (write(STDOUT_FILENO, buffer, letters_read) != letters_read)
	{
		free(buffer);
		close(file);
		return (0);
	}
	free(buffer);
	close(file);
	return (letters_read);
}
