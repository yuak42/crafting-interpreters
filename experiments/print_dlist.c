#include <stdio.h>

#include "dlist.h"

void	print_dlist(t_dlist *dlist)
{
	// Go to the most left
	while (dlist->prev)
		dlist = dlist->prev;

	printf("NULL\n");
	printf(" --- \n");
	while (dlist)
	{
		printf("%s\n", (char *) dlist->data);
		printf(" --- \n");
		dlist = dlist->next;
	}
	printf("NULL\n");
}