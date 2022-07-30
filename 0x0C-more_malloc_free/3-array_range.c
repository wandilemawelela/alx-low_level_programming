#include "main.h"
#include <stdlib.h>

/**
  * array_range -  creates an array of integers.
  * @min: Minimum Int
  * @max: Maximum Int
  * The array created should contain all the values from min (included) to
  * max (included), ordered from min to max
  * Return: pointer to the newly created array
  * If min > max, return NULL
  * If malloc fails, return NULL
  *
  */

int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (max - min + 1));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < max - min + 1; i++)
		array[i] = min + i;

	return (array);
}
