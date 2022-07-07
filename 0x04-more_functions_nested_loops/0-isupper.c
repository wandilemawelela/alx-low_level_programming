#include "main.h"

/**
  * _isupper - Checks for uppercase character.
  * @c: Char
  * Return: 1 if c is uppercase and 0 otherwise
  *
  */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
