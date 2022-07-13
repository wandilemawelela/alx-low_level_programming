#include "main.h"
#include <string.h>
/**
  * *_strcat - concatenates two strings.
  * Return: pointer to the resulting string
  * @dest: Destinatio char
  * @src: Source char
  *
  */

char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\n')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
