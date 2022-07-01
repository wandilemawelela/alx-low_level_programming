#include <stdlib.h>
#include <stdio.h>

/**
  * main - Entry point
  * Description - Prints the alphabet in lowercase in reverse.
  * Return: 0
  */
int main(void)
{
	int ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
