#include <stdio.h>

/**
  * main - Entry point
  * Description - Write a program that prints all the numbers of base 16
  * in lowercase.
  * Return: 0
  */
int main(void)
{
	int numbers;
	char letters;

	for (numbers = 0; numbers <= 9; numbers++)
	{
		putchar(numbers);
	}

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		putchar(letters);
	}

	putchar('\n');
	return (0);
}
