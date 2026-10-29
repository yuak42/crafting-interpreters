#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dlist.h"

int	main(void)
{
	t_dlist	*head;

	head = create_dlist_node(strdup("deneme"));
	// if (!head)
	// 	return (printf("Error: create_dlist_node\n"), 1);
	
	insert_dlist_front(head, create_dlist_node(strdup("Hey!")));
	insert_dlist_front(head, create_dlist_node(strdup("Hello World!")));
	insert_dlist_back(head, create_dlist_node(strdup("This should be back")));



	
	print_dlist(head);	
	free_dlist(head);
	return (0);
}
