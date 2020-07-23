#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

t_list		*ft_list_push_strs(int size, char **strs);

int main(void)
{
	t_list	*begin_list;
	char	**strs = (char **)malloc(sizeof(char *) * 4);

	strs[0] = "this is";
	strs[1] = "test.";
	strs[2] = "plust";
	strs[3] = 0;
	begin_list = ft_list_push_strs(3, strs);

	while (begin_list)
	{
		printf("%s\n", begin_list->data);
		begin_list = begin_list->next;
	}

	return (0);
}

t_list *ft_create_elem(void *data)
{
	t_list *elem;

	elem = (t_list *)malloc(sizeof(t_list));
	if (elem == 0)
		return (0);
	elem->data = data;
	elem->next = 0;
	return (elem);
}