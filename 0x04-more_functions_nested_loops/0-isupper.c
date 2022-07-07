#include "main.h"

/**
  * _isupper - Checks for uppercase character.
  * @c: Char
  * Return: 1 if c is uppercase and 0 otherwise
  *
  */

int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
			return (0);
	}
	return (0);
}
