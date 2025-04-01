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
	while (*h) /*nodes are running*/
	{
		if (next->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
		printf("[%d] %s\n", n, next->str); /*prints strings in every node*/
		}
	n++
	h++; /*is there another notation for this? its not an array*/
	}
	printf("-> %d elements\n", n);
	return(n)
	/*currently only runs for 1 node, how  do i link to next node?*/
}


/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
