#include "main.h"

/**
 * append_text_to_file - Appends Text at the End of a File.
 * @filename: A Pointer to the Name of the File.
 * @text_content: The String to Add to the End of the File.
 *
 * Return: If the Function Fails or Filename is NULL - -1.
 *         If the file does not Exist the User lacks Write Permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
