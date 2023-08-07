#include "main.h"

/**
 * append_text_to_file - appends txt at end of file
 * @filename: name of file
 * @text_content: str to add to file
 *
 * Return: 1(success), -1(failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int length, o, w = 0;

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

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, length);

	if (o == -1 || w == -1)
	{
		return (-1);
	}

	close(o);

	return (1);
}
