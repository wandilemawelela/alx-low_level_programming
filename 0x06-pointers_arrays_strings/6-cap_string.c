#include "main.h"

/**
  * *cap_string - capitalizes all words of a string
  * @str: Char to be capitilized
  * Return: str
  *
  */

char *cap_string(char *str)
{
	char spc[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int len = 13;
	int a = 0, i;

	while (str[a])
	{
		i = 0;
		while (i < len)
		{
			if ((a == 0 || str[a - 1] == spc[i]) && (str[a] >= 97 && str[a] <= 122))
				str[a] = str[a] - 32;
			i++;
		}
		a++;
	}
	return (str);
}
