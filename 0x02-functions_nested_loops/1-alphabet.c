#include "main.h"

/**
  * print_alphabet -  Prints the alphabet, in lowercase, followed by a new line
  *
  */

void print_alphabet(void)
{
	int f;

	for (f = 'a'; f <= 'z'; f++)
	{
		_putchar(f);
	}
	_putchar('\n');
}
