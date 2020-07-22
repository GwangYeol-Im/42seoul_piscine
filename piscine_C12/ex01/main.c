#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void ft_list_push_front(t_list **begin_list, void *data);

int main(void)
{
	t_list **begin_list = (t_list **)malloc(sizeof(t_list *));

	*begin_list = 0;
	ft_list_push_front(begin_list, "world!");
	ft_list_push_front(begin_list, "hello");

	t_list *curr = *begin_list;
	while (curr)
	{
		printf("%s\n", curr->data);
		curr = curr->next;
	}

	return (0);
}
