#include "main.h"

/**
  * get_bit - returns the value of a bit at a given index
  * @index: index, starting from 0 of the bit you want to get
  * @n: Number
  * Return: the value of the bit at index index or -1 if an error occured
  *
  */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit = (n >> index) & 1;

	if (index > 64)
		return (-1);
	return (bit);
}
