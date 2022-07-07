#include "main.h"

/**
  * _isdigit - Checks for a digit (0 through 9).
  * @c: Char
  * Return: 1 if c is a digit and 0 otherwise
  */

int _isdigit(int c)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (c == i + '0')
		{
			return (1);
		}
			return (0);
	}
	return (0);
}
