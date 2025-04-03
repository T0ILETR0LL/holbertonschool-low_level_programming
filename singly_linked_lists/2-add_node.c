#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - prints the nodes
 * @str: string - (malloc'ed string)
 * @Return: address of new string
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("NULL");
	}
	while (str[i] != '\0')
	{
		i++;
	}
	new-> str = strdup(str);
	new-> len = i;
	new-> next = *head;
	*head = new;
	return (head);
}
