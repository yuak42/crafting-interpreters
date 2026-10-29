#ifndef	DLIST_H
# define DLIST_H

typedef struct s_dlist {
	void	*data;
	void	*prev;
	void	*next;
} t_dlist;

t_dlist	*create_dlist_node(void *data);
void	print_dlist(t_dlist *dlist);
void	free_dlist(t_dlist *dlist);
int		insert_dlist_front(t_dlist *dlist, t_dlist *front);
int		insert_dlist_back(t_dlist *dlist, t_dlist *back);
int		delete_dlist_node(t_dlist *del);

#endif