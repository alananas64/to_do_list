#include "to_do_list.h"

/**
 *	the int main prompt a question for the user if he wants to add a new task or not or exit :
 *	if yes: the program asks for details about the task (name, Description, ...etc)
 *	if No : check if the list is empty it warns the user
 *	if exit: it exit the program
*/
int main()
{
	char	Bool[5];
	char	Bool2[5];
	t_list	*current_to_do_list;

	current_to_do_list = NULL;
	while(1)
	{
		printf("\n\e[95mDo you Want To Add a New Task ?(Yes, NO, Exit) \e[0m");
		scanf("%s", Bool);
		if ((Bool[0] == 'n') || (Bool[0] == 'N'))
		{
			if (current_to_do_list)
			{
				printf("\n------------------\n\e[95mYour Current TO_DO_LIST is :\n\e[0m");
				print_list(current_to_do_list);
			}
			else
			{
				printf("\e[90mYou Do Not Have Tasks In Your List, Do you Want To exit? \e[0m");
				scanf("%s", Bool2);
				if ((Bool2[0] == 'e') || (Bool2[0] == 'E')|| (Bool2[0] == 'y') || (Bool2[0] == 'Y'))
					return(0);
			}
		}
		else if ((Bool[0] == 'e') || (Bool[0] == 'E'))
			return(0);
		else if ((Bool[0] == 'y') || (Bool[0] == 'Y'))
			Add_Task(&current_to_do_list);
		else //protection in case the user gave unaccepted input
			printf("\e[90mNotice! Please Pick From The Options (Yes, NO, Exit)\e[0m\n");
	}
	return (0);
}
