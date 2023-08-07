#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: NULL terminated str to write to file
 *
 * Return: 1(success), -1(failure)
 */
int create_file(const char *filename, char *text_content)
{
	int fileD, length, w = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (length = 0; text_content[length] != '\0'; length++)
		{

		}
	}

	fileD = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fileD, text_content, length);

	if (fileD == -1 || w == -1)
	{
		return (-1);
	}

	close(fileD);

	return (-1);
}
