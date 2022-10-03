#include "main.h"

/**
  * _atoi - converts a string to an integer.
  * @s: String to convert
  *
  * Return: Int
  *
  */

int _atoi(char *s)
{
	int i = 0;
	unsigned int j = 0;
	int k = 1;
	int l = 0;

	while (s[i])
	{
		if (s[i] == 45)
		{
			k *= -1;
		}

		while (s[i] >= 48 && s[i] <= 57)
		{
			l = 1;
			j = (j * 10) + (s[i] - '0');
			i++;
		}

		if (l == 1)
		{
			break;
		}

		i++;
	}

	j *= k;
	return (j);
}
