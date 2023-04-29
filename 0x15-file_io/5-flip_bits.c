#include "main.h"

/**
  * flip_bits -  returns the number of bits you would need to flip to get
  * from one number to another.
  * @n: First num
  * @m: Second num
  * Return: Always 0.
  *
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int xor_result = n ^ m;

	while (xor_result)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}
	return (count);
}
