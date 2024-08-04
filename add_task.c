#include "to_do_list.h"

void	print_list(t_list *root)
{
	int i;

	i = 1;
	while (root != NULL)
	{
		printf("\e[97m%i) %s\n\e[0m", i, root->content);
		root = root->next;
		i++;
	}
}

t_list	*create_node(char *content)
{
	t_list	*newnode;

	newnode = (t_list *)malloc(sizeof(t_list));
	if (!(newnode))
		return (NULL);
	newnode->content = strdup(content);
	newnode->next = NULL;
	return (newnode);
}

t_list	*find_last_node(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

void	add_node_at_the_end(t_list **lst, t_list *new)
{
	t_list	*last;

	if ((lst == NULL) || (new == NULL))
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = find_last_node(*lst);
	last->next = new;
}

t_list	*Add_Task(t_list	**current_to_do_list)
{
	char	title[20];
	char	Description[100];
	char	DueDate[11];
	char	Priority[7];
	char	Category[15];

	printf("\e[95m					Add Task					\n\e[0m");
	printf("\e[95mEnter a Title : \e[0m");
	scanf("%s", title);

	printf("\e[95mEnter a Description : \e[0m");
	scanf("%s", Description);

	printf("\e[95mWhat is the DueDate eg.[15-08-1998]: \e[0m");
	scanf("%s", DueDate);

	printf("\e[95mPriority :low, medium or high? \e[0m");
	scanf("%s", Priority);

	printf("\e[95mCategory :Personal, Business or Family&Friends? \e[0m");
	scanf("%s", Category);

	printf("\n------------------\n\e[95mYour Current TO_DO_LIST is :\n\e[0m");
	add_node_at_the_end(current_to_do_list, create_node(title));
	print_list(*current_to_do_list);
	return(*current_to_do_list);
}
