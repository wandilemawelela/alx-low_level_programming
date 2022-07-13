#include "main.h"

/**
  * _strcmp - compares two strings
  * @s1: First string
  * @s2: Second string
  * Return: If two strings are same then strcmp() returns 0, otherwise,
  * it returns a non-zero value.
  */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
	{
		return (0);
	}
	return (*s1 - *s2);
}
