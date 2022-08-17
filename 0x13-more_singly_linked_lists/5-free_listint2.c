#include "lists.h"

/**
  * free_listint2 - frees a listint_t list.
  * @head: A pointer to the list_t list.
  *
  */

void free_listint2(listint_t **head)
{
	listint_t *temp; /* temp is the current node */
	listint_t *next; /* next is the next node */

	if (head == NULL) /* if the list is empty */
		return;

	temp = *head; /* temp is the current node */

	while (temp != NULL) /* while the list is not empty */
	{
		next = temp->next; /* next is the next node */
		free(temp); /* free the current node */
		temp = next; /* temp is the next node */
	}
	*head = NULL; /* assign the head to NULL */
}
