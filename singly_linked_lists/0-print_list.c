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
	while (h != '\0') /*nodes are running*/
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
		printf("[%d] %s\n", h->len, h->str); /*prints strings in every node */
		}
	n++;
	h + h-> *next; /*is there another notation for this? its not an array. i want to move on the next node*/
	}
	printf("-> %d elements\n", n);
	return(n);
}
