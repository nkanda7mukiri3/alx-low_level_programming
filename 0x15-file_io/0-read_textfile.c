#include "main.h"

/**
 * read_textfile- Reads text file and prints to stdout
 * @filename: text file
 * @letters: num of letters
 * Return: num of letters read and printed(success), 0(failure)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fileD, r, w;

	fileD = open(filename, O_RDONLY);
	if (fileD == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	r = read(fileD, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	free(buffer);
	close(fileD);

	return (w);
}
