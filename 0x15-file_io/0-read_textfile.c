#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output.
 * @filename: The name of the file read.
 * @letters: The letters in the file.
 *
 * Return: Always 0 (Success).
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file = open(filename, O_RDONLY);,
	letters_read = read(file, buffer, letters);
	char *buffer = malloc(letters * sizeof(char));

	if (filename == NULL)
		return (0);
	if (file == -1)
		return (0);
	if (buffer == NULL)
	{
		close(file);
		return (0);
	}
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
