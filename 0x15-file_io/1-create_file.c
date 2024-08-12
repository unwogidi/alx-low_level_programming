#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t charWritten;
	size_t text_length = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_length] != '\0')
		{
			text_length++;
		}

		charWritten = write(file, text_content, text_length);
		if (charWritten == -1 || (size_t)charWritten != text_length)
		{
			close(file);
			return (-1);
		}
	}

	if (close(file) == -1)
		return (-1);

	return (1);
}