#include "lists.h"

/**
  * pop_listint -  deletes the head node of a listint_t linked list,
  * and returns the head node’s data (n).
  * if the linked list is empty return 0
  * @head: A pointer to the list_t list.
  * Return:  the head node’s data (n).
  *
  */

int pop_listint(listint_t **head)
{
	listint_t *temp; /* temp is the current node */
	int n; /* n is the data of the current node */

	if (*head == NULL) /* if the list is empty */
		return (0);

	temp = *head; /* temp is the current node */
	n = temp->n; /* n is the data of the current node */
	*head = temp->next; /* assign the next node to the head */
	free(temp); /* free the current node */
	return (n); /* return the data of the current node */
}
