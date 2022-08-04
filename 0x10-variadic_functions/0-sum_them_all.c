#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>

/**
  * sum_them_all - sum of all its parameters.
  * Return: If n == 0, return 0
  * @n: Total numbers to sum
  */

int sum_them_all(const unsigned int n, ...)
{
	int res = 0;
	unsigned int i;
	va_list numbers;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		res += va_arg(numbers, unsigned int);
	}
	va_end(numbers);
	return (res);
}
