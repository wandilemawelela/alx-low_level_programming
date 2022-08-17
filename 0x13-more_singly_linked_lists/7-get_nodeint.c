#include "lists.h"

/**
  * get_nodeint_at_index - returns the nth node of a listint_t linked list.
  * where index is the index of the node, starting at 0
  * if the node does not exist, return NULL
  * @head: A pointer to the list_t list.
  * @index: The index of the node to locate
  * Return: the nth node of a listint_t linked list.
  *
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i; /* counter */

	if (head == NULL) /* if the list is empty */
		return (NULL);

	for (i = 0; i < index; i++) /* loop through the list */
	{
		if (head->next == NULL) /* if the index is out of bounds */
			return (NULL);
		head = head->next; /* move to the next node */
	}
	return (head);  /* return the nth node */
}
