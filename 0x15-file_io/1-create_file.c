#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: The name of the file to create.
 * @text_content: The NULL terminated string to write to the file.
 *
 * Return: 1 on success, or -1 on failure.
*/

int create_file(const char *filename, char *text_content)
{
	int file, w_len = 0;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[w_len] != '\0')
			w_len++;

		if (write(file, text_content, w_len) != w_len)
		{
			close(file);
			return (-1);
		}
	}

	close(file);
	return (1);
}
