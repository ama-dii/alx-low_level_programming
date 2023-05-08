#include "main.h"

/**
  * read_textfile- func that reads a text file and prints it to POSIX stand/out
  * @filename: the filename to open
  * @letters: the number of letters to read and print
  * Return: the number of letters read and printed, or 0 on failure
**/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int cut, paul, aye;
	char *temp;

	if (filename == NULL)
		return (0);

	temp = malloc(sizeof(char) * letters);
	if (temp == NULL)
		return (0);

	cut = open(filename, O_RDONLY);
	if (cut < 0)
	{
		free(temp);
		return (0);
	}

	paul = read(cut, temp, letters);
	if (paul < 0)
	{
		free(temp);
		return (0);
	}

	aye = write(STDOUT_FILENO, temp, paul);
	free(temp);
	close(cut);

	if (aye < 0)
		return (0);
	return ((ssize_t)aye);
}
