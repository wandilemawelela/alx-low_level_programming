#include "main.h"
#include <stdlib.h>

/**
  * read_textfile - reads a text file and prints it to the POSIX standard
  * output.
  * @letters: number of letters it should read and print
  * @filename: Name of text file
  * if the file can not be opened or read, return 0
  * if filename is NULL return 0
  * if write fails or does not write the expected amount of bytes, return 0
  * Return: number of letters it could read and print
  *
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buf;

	if (filename == NULL) /* if filename is NULL return 0 */
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL) /* if the file can not be opened or read, return 0 */
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(o);

	return (w); /*  Return number of letters it could read and print */
}
