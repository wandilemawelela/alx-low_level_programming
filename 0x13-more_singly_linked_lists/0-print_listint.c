#include "lists.h"
#include <stdio.h>
/**
  * print_listint - prints all the elements of a listint_t list.
  * Return: the number of nodes
  * @h: Head
  */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);  /* prints the data of the node */
		h = h->next;         /* moves to the next node */
		count++;
	}
	return (count);
}
