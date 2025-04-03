#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len - prints the nodes
 * @str: string - (malloc'ed string)
 * @Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int n = 0; /*counter for nodes*/
	
	while (h != NULL) /*nodes are running*/
	{
	n++;
	h = h->next; /*syntax to access next node*/
	}
	return (n);
}
