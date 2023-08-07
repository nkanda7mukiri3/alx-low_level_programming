#include "main.h"

/**
 * read_textfile - reads txt file and prints to stdout
 * @filename: name of file to be read
 * @letters: max char to read from file
 *
 * Return: num of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *tmp;
	ssize_t fileD, w, r;

	fileD = open(filename, O_RDONLY);
	if (fileD == -1)
	{
		return (0);
	}

	tmp = malloc(sizeof(char) * letters);
	r = read(fileD, tmp, letters);
	w = write(STDOUT_FILENO, tmp, r);

	free(tmp);
	close(fileD);

	return (w);
}
