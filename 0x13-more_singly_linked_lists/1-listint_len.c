#include "lists.h"

/**
  * listint_len - returns the number of elements in a linked listint_t list.
  * @h: Head
  * Return: the number of nodes
  */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next; /* moves to the next node */
		count++;
	}

	return (count);
}
