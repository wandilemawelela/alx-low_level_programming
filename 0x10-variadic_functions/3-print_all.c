#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  *  prints anything.
  * @format: list of types of arguments passed to the function
  *
  */

void print_all(const char * const format, ...)
{
	int i;
	va_list data;

	va_start(data, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			printf("%d", format[i]);
		}
		else if (format[i] == '%' && format[i + 1] != ' ')
		{
			switch (format[i + 1])
			{
				case 'c':
					printf("%d", va_arg(data, int));
				break;
				case 'i':
					printf("%d", va_arg(data, int));
				break;
				case 'f':
					printf("%d", va_arg(data, int));
				break;
				case 's':
					printf("%s", va_arg(data, char *));
				break;
				default:
				break;
			}
			i += 2;
		}
	}
	va_end(data);
}
