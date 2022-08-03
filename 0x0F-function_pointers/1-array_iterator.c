#include "function_pointers.h"
#include <stddef.h>

/**
  * array_iterator - executes a function given as a parameter on each
  * element of an array.
  * @size: size of the array
  * @action: pointer to the function you need to use
  * @array: Array to be iterated upon
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}

