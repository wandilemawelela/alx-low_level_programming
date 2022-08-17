#include "lists.h"

/**
  * free_listint - frees a listint_t list.
  * @head: A pointer to the list_t list.
  */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL) /* while the list is not empty */
	{
		temp = head; /* temp is the current node */
		head = head->next; /* head is the next node */
		free(temp); /* free the current node */
	}
}
