#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * print_list - prints the nodes
 * @str: string - (malloc'ed string)
 * @Return: address of new string
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new; /*new node*/
	int i = 0;/* for string length */ 

	new = malloc(sizeof(list_t)); /*allocate space for new node*/
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	new->str = strdup(str);
	new->len = i;
	new->next = *head;
	*head = new;
	return (new);
	free(new);
}
