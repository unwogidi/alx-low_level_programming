#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file to append
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t charWritten;
	size_t text_length = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_length] != '\0')
			text_length++;

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
