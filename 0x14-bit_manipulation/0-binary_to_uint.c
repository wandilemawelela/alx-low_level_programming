#include "main.h"
#include <stddef.h>
#include <math.h>

/**
  * binary_to_uint - converts a binary number to an unsigned int.
  * @b: pointing to a string of 0 and 1 chars
  * Return: he converted number, or 0 if
  * there is one or more chars in the string b that is not 0 or 1
  * b is NULL
  *
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;	/* holds the converted number */
	int i = 0;

	if (b == NULL) /* if b is NULL, return 0 */
		return (0);

	while (b[i] == '0' || b[i] == '1') /* while b[i] is 0 or 1, */
	{
		val <<= 1; /* shift the value to the left by 1 */
		val += b[i] - '0'; /* add the value of b[i] to the value */
		i++;
	}
	return (val);
}
