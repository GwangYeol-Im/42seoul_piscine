#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

t_list		*ft_list_push_strs(int size, char **strs);
void		ft_list_clear(t_list *begin_list, void (*free_fct)(void *));

void	free_data(void *data)
{
	free(data);
}

int main(void)
{
	t_list	*begin_list;
	char	**strs = (char **)malloc(sizeof(char *) * 4);

	strs[0] = "this is";
	strs[1] = "test.";
	strs[2] = "plust";
	strs[3] = 0;
	begin_list = ft_list_push_strs(3, strs);

	t_list	*curr = begin_list;
	while (curr)
	{
		printf("%s\n", curr->data);
		curr = curr->next;
	}
	ft_list_clear(begin_list, &free_data);
	if (begin_list->next)
		printf("%p", begin_list->next);

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

t_list		*ft_list_push_strs(int size, char **strs)
{
	t_list	*prev;
	t_list	*curr;
	int		idx;

	idx = 0;
	if (!(curr = ft_create_elem(strs[idx])))
		return (0);
	while (idx < size - 1)
	{
		prev = ft_create_elem(strs[++idx]);
		prev->next = curr;
		curr = prev;
	}
	return (curr);
}
