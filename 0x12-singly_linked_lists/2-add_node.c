#include "lists.h"
#include<string.h>
#include<stdlib.h>

/**
 * add_node - adds a new node at the beginnning of a list
 *
 * @head: head
 * @str: string
 *
 * Return: the address of the new element, else
 * NULL if it failed
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	int length = 0;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	while (str[length])
		length++;

	node->len = length;
	node->str = strdup(str);
	node->next = *head;
	*head = node;
	return (node);
}
