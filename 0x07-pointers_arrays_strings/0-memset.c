#include "main.h"

/**
  * _memset - fills memory with a constant byte.
  * @s: Pointer constant
  * @b: Constant value
  * @n: Number of bytes
  * Return: Pointer constant
  *
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
