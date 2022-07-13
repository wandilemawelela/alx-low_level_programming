#include "main.h"

/**
  * *cap_string - capitalizes all words of a string
  * @str: Char to be capitilized
  * Return: str
  *
  */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		/* Check if first char is lowercase */
		if (i == 0)
		{
			if ((str[i] >= 'a' && str[i] <= 'z'))
			{
				str[i] = str[i] - 32; /* Make it capital letter by subtracting 32*/
				continue;
			}
		}
		if (str[i] == ' ') /* Checks for space*/
		{
			++i; /*Move to next char*/
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
				continue;
			}
		} else
		{
			/* Make all other uppercase chars to be lowercase */
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] = str[i] + 32;
			}
	}
	}
	return (str);
}
