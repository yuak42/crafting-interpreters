#include <stdio.h>
#include <stdlib.h>

#include "dlist.h"

int	main(void)
{
	t_dlist	*head;
	char *head_data = "deneme";

	head = create_dlist_node(head_data);
	if (!head)
		return (printf("Error: create_dlist_node\n"), 1);
	print_dlist(head);
	free(head);
	return (0);
}