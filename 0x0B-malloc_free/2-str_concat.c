#include "main.h"
#include <stdlib.h>

/**
  * str_concat - concatenates two strings.
  * @s1: String one
  * @s2: String two
  * Return: NULL
  *
  */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, l = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;

	k = i + j;
	s = (char *) malloc(k * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);
	j = 0;
	while (l < k)
	{
		if (l < i)
			s[l] = s1[l];
		if (l >= i)
		{
			s[l] = s2[j];
			j++;
		}
		l++;
	}
	s[l] = '\0';
	return (s);
}
