#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

/**
 * create_file - Appends text at the end of a file.
 * @filename: The name of the file to create.
 * @text_content: The NULL terminated string to write to the file.
 *
 * Return: 1 on success, or -1 on failure.
*/

int create_file(const char *filename, char *text_content)
{
	int file, len, bytes_written;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = 0;
		for (text_content[len])
			len++;

		bytes_written = write(file, text_content, len);
		if (bytes_written == -1 || bytes_written != len)
		{
			close(file);
			return (-1);
		}
	}

	if (fchmod(file, mode) == -1)
	{
		close(file);
		return (-1);
	}

	close(file);
	return (1);
}
