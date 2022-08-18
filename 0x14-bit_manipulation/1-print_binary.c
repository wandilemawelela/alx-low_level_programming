#include "main.h"

/**
  * print_binary - prints the binary representation of a number.
  * You are not allowed to use arrays
  * You are not allowed to use malloc
  * You are not allowed to use the % or / operators
  * Return: 0
  *
  */

void print_binary(unsigned long int n)
{
	unsigned int i;

	for (i = 1 << 31; i > 0; i = i / 2)
        (n & i) ? _putchar('1' + 0) : _putchar('0' + 0);
}
