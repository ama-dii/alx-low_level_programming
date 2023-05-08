#include "main.h"

/**
  * create_file- func that creates a file
  * @filename: file name to be created
  * @text_contents:  is a NULL terminated string to write to the file
  * Return: 1 on success, -1 if file can not be created, nor written,
  * nor write fails.
**/

int create_file(const char *filename, char *text_content)
{
	int f_name, c_name, length = 0;

	if (filename == NULL)
		return (-1);

	f_name = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (f_name < 0)
		return (-1);

	while (text_content && *(text_content + length))
		length++;

	c_name = write(f_name, text_content, length);
	close(f_name);
	if (c_name < 0)
		return (-1);
	return (1);
}
