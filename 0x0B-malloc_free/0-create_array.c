#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
  * create_array - creates an array of chars, and initializes it with a
  * specific char.
  * @size: Array size
  * @c: Char size
  * Return: NULL if size = 0, pointer to the array, or NULL if it fails
  *
  */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}
