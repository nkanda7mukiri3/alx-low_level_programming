#include "main.h"

/**
 * append_text_to_file - appends text at end of file
 * @filename: name of file
 * @text_content: string to add to end of file
 *
 * Return: 1(success), -1(failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fileD, w, length = 0;

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

	fileD = open(filename, O_WRONLY | O_APPEND);
	w = write(fileD, text_content, length);

	if (fileD == -1 || w == -1)
	{
		return (-1);
	}

	close(fileD);

	return (1);
}
