#include "main.h"

/**
  * _islower - Checks for lowercase character.
  * Return: 1 if true and 0 if false.
  * @c: the integer value it receives
  */

int _islower(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		/* Use int c*/
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
