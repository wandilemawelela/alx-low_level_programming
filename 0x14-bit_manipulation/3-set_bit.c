#include "main.h"

/**
  * set_bit - sets the value of a bit to 1 at a given index.
  * @index:  index, starting from 0 of the bit you want to set
  * @n: Number
  * Return: 1 if it worked, or -1 if an error occurred
  *
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p; /* holds the power of 2 */

	if (index > 64) /* if index is greater than 64, */
		return (-1);

	for (p = 1; index > 0; index--, p *= 2) /* for each index, */
		; /* do nothing */
	*n += p; /* add the power of 2 to n */

	return (1);
}
