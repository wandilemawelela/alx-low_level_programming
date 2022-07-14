#include "main.h"

/**
  * *leet - encodes a string into 1337.
  * @str: String to be encoded
  * Return: Leeted string
  */

char *leet(char *str)
{
	int i = 0, j;
	int k = 5;

	char orgltr[5] = {'A', 'E', 'O', 'T', 'L'}; /* Original Letters */
	char leetltr[5] = {'4', '3', '0', '7', '1'}; /* Leet letters*/

	while (str[i])
	{
		j = 0;

		while (j < k)
		{
			if (str[i] == orgltr[j] || str[i] - 32 == orgltr[j])
			{
				str[i] = leetltr[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
