#include "main.h"

/**
  * rev_string - reverses a string.
  * @s: reverse string
  *
  */

void rev_string(char *s)
{
	char var;
	int i, firstLength, secondLength;

	firstLength = 0;
	secondLength = 0;

	while (s[firstLength] != '\0')
		firstLength++;

	secondLength = firstLength - 1;
	for (i = 0; i < firstLength / 2; i++)
	{
		var = s[i];
		s[i] = s[secondLength];
		s[secondLength] = var;
		secondLength -= 1;
	}
}
