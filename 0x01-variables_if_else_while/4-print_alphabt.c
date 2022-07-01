#include <unistd.h>
#include <stdio.h>

/**
  * main - Entry point
  * Description - Prints the alphabet in lowercase
  * without letter q and e.
  * Return: 0
  */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		} else
		{

		}
	}
	putchar('\n');
	return (0);
}
