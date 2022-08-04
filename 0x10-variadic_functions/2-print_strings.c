#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

/**
  * print_strings - strings, followed by a new line.
  * @separator: string to be printed between strings
  * @n: number of strings passed to the function
  * If separator is NULL, don’t print it
  * If one of the string is NULL, print (nil) instead
  *
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(strings, char *));
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(strings);
}
