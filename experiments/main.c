#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dlist.h"

int	main(void)
{
	t_dlist	*head;

	head = create_dlist_node(strdup("deneme"));
	if (!head)
		return (printf("Error: create_dlist_node\n"), 1);
	print_dlist(head);
	free_dlist(head);
	return (0);
}
