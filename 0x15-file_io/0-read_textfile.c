#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: name of the file to read
 * @letters: number of letters it shouldread and print
 * Return: actual number of letters it could read and print, or 0 if fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *memory;
	ssize_t charRead, charWritten;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	memory = malloc(sizeof(char) * (letters + 1));
	if (memory == NULL)
	{
		close(file);
		return (0);
	}

	charRead = read(file, memory, letters);
	if (charRead == -1)
	{
		free(memory);
		close(file);
		return (0);
	}
	memory[charRead] = '\0';

	charWritten = write(STDOUT_FILENO, memory, charRead);
	if (charWritten == -1 || charWritten != charRead)
	{
		free(memory);
		close(file);
		return (0);
	}

	free(memory);
	close(file);

	return (charWritten);
}
