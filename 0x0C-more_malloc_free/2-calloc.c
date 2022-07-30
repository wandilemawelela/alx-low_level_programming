#include "main.h"
#include <stdlib.h>

/**
  * _calloc - allocates memory for an array of nmemb elements of size bytes
  * each and returns a pointer to the allocated memory.
  * @nmemb: size of array
  * @size: size of each element
  * The memory is set to zero
  * If nmemb or size is 0, then _calloc returns NULL
  * If malloc fails, then _calloc returns NULL
  * Return: Pointer to to the allocated memory.
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;
	return (ptr);
}
