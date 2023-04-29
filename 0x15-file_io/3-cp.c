#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#define BUFFER_SIZE 1024

/**
  * main - copies the content of a file to another file.
  * @program_name: Name of program
  * Return: Always 0.
  */

void print_usage(char *program_name);
void print_read_error(char *filename);
void print_write_error(char *filename);
void print_close_error(int fd);

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		print_usage(argv[0]);
		exit(EXIT_FAILURE);
	}

	fd_from = open(argv[1], O_RDONLY);

	if (fd_from == -1)
	{
		print_read_error(argv[1]);
		exit(EXIT_FAILURE);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);

	if (fd_to == -1)
	{
		print_write_error(argv[2]);
		exit(EXIT_FAILURE);
	}

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);

		if (bytes_written == -1)
		{
			print_write_error(argv[2]);
			exit(EXIT_FAILURE);
		}
	}

	if (bytes_read == -1)
	{
		print_read_error(argv[1]);
		exit(EXIT_FAILURE);
	}

	if (close(fd_from) == -1)
	{
		print_close_error(fd_from);
		exit(EXIT_FAILURE);
	}

	if (close(fd_to) == -1)
	{
		print_close_error(fd_to);
		exit(EXIT_FAILURE);
	}
	return (0);
}

/**
  * print_usage - Prints usage
  * @program_name: Name of program
  *
  */

void print_usage(char *program_name)
{
	dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", program_name);
}

/**
  * print_read_error - Prints read error
  * @filename: File name
  *
  */

void print_read_error(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
}

/**
  * print_write_error - Prints write error
  * @filename: Filename
  *
  */

void print_write_error(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
}

/**
  * print_close_error - Prints clode error
  * @fd: the fd
  *
  */

void print_close_error(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
}
