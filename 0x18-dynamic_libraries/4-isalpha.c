#include "main.h"

/**
  * _isalpha - Checks for lowercase character.
  * Return: 1 if true and 0 if false.
  * @c: the integer value it receives
  */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	} else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	} else
		return (0);
}
