#include "main.h"
#include <stdio.h>

/**
  * print_binary - prints the binary representation of a number.
  * You are not allowed to use arrays
  * You are not allowed to use malloc
  * You are not allowed to use the % or / operators
  * @n: Number to be converted to binary
  * Return: 0
  *
  */

void print_binary(unsigned long int n)
{
	if (n >> 1)
		print_binary(n >> 1);
	putc((n & 1) ? '1' : '0', stdout);
}
