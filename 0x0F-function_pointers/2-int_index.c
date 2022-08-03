#include "function_pointers.h"
#include <stddef.h>

/**
  * int_index -  searches for an integer
  * @size:  number of elements in the array array
  * @cmp: pointer to the function to be used to compare values
  * @array: Array of intergers
  * Return: returns the index of the first element for which the cmp
  * function does not return 0
  * If no element matches, return -1
  * If size <= 0, return -1
  *
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);

	return (0);
}
