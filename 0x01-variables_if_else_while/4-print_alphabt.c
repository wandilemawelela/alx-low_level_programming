#include <stdlib.h>
#include <stdio.h>

/**
  * main - Entry point
  * Description - Prints the alphabet in lowercase
  * without letter q and e.
  * Return: 0
  */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
