#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat -  concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: bytes of @s2 to add to @s1 to be a new string
 *  Return: new string followed by the first @n bytes
 * of string 2 @s2 or NULL
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = n, index;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] != '\0'; index++)
		; /* count the length of string 1 */

	for (; s2[index] != '\0' && index < n; index++)
		; /* count the length of string 2 */

	concat = malloc(sizeof(char) * (index + len + 1));
	if (concat == NULL)
		return (NULL);
	for (index = 0; s1[index] != '\0'; index++)
		concat[index] = s1[index];
	for (; s2[index - len] != '\0' && index < n; index++)
		concat[index] = s2[index - len];

	concat[index] = '\0';
	return (concat);
}
