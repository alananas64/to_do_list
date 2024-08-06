/**
 * About this header file :
 * checks if this header defined already or not
 * since it is customized header it will define it as follows
 * it uses the help of predefined headers (libraries)
*/
#ifndef	TO_DO_LIST_H
#define TO_DO_LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// create a struct to store the tasks added to the list
typedef struct s_list
{
	char	*content;
	struct s_list	*next;
}	t_list;

// Prototypes for the custom functions used in the project

void		print_list(t_list *root);
t_list		*create_node(char *content);
t_list		*find_last_node(t_list *lst);
void		add_node_at_the_end(t_list **lst, t_list *new);
t_list		*Add_Task(t_list **current_to_do_list);

#endif /* TO_DO_LIST_H */
