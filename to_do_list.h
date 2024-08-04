#ifndef	TO_DO_LIST
#define TO_DO_LIST

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct s_list
{
	char	*content;
	struct s_list	*next;
}	t_list;

void	print_list(t_list *root);
t_list	*create_node(char *content);
t_list	*find_last_node(t_list *lst);
void	add_node_at_the_end(t_list **lst, t_list *new);
t_list	*Add_Task(t_list	**current_to_do_list);
#endif
