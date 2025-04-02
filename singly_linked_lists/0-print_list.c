#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - prints the nodes
 * @str: string - (malloc'ed string)
 * @Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int n = 0; /*counter for nodes*/
	
	while (h != NULL) /*nodes are running*/
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d] %s\n", h->len, h->str); /*prints strings in every node */
		}
	n++;
	h = h->next; /*syntax to access next node*/
	}
	return (n);
}
