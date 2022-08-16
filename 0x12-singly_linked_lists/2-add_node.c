#include "list.h"

/**
  * add_node -  adds a new node at the beginning of a list_t list.
  * Return: the address of the new element, or NULL if it failed
  * @head: A pointer to the head of the list_t list.
  * @str: The string to be added to the list_t list.
  * str needs to be duplicated
  *
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *dup_str;
	int len;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup_str = strdup(str);
	if (dup_str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = dup_str;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
