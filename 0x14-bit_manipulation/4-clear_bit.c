#include "main.h"

/**
  * clear_bit -  sets the value of a bit to 0 at a given index.
  * @index:  index, starting from 0 of the bit you want to set
  * @n: Number
  * Return: 1 if it worked, or -1 if an error occurred
  *
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i; /* holds the power of 2 */
	unsigned int hold; /* holds the value of the bit at index index */

	if (index > 64) /* if index is greater than 64, */
		return (-1);
	hold = index; /* hold is the value of the bit at index index */
	for (i = 1; hold > 0; i *= 2, hold--)	/* for each index, */
		; /* do nothing */

	if ((*n >> index) & 1) /* if the bit at index index is 1, */
		*n -= i; /* subtract the power of 2 from n */

	return (1);
}
