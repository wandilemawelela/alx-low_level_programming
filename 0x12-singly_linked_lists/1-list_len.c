#include "lists.h"

/**
  * list_len - Finds the number of elements in a linked list_t list.
  * @h: list_t list
  * Return: The number of elements in h.
  */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *temp = h; /* temp is a pointer to the head of the list */

	if (h == NULL)  /* if the list is empty */
	{
		return (0);
	}

	while (temp != NULL) /* while the list is not empty */
	{
		temp = temp->next; /* move to the next node */
		count++; /* increment the count */
	}
	return (count);
}
