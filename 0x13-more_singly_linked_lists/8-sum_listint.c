#include "lists.h"

/**
  * sum_listint - returns the sum of all the data (n) of a listint_t linked
  * list.
  * if the list is empty, return 0
  * @head: A pointer to the list_t list.
  * Return: sum of all the data (n) of a listint_t linked list.
  *
  */

int sum_listint(listint_t *head)
{
	int sum = 0; /* sum of all the data (n) of a listint_t linked list */
	listint_t *temp; /* temporary node */

	if (head == NULL) /* if the list is empty */
		return (0);

	temp = head; /* temporary node */

	while (temp != NULL) /* loop through the list */
	{
		sum += temp->n; /* sum the data (n) of the current node */
		temp = temp->next; /* move to the next node */
	}
	return (sum); /* return the sum */
}

