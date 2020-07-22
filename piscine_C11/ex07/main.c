#include <stdio.h>
void		ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *));

int			ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (0);
		i++;
	}
	if (s1[i] > s2[i])
		return (1);
	return (0);
}

int         main(void)
{
    char    **test;
    int     i = 0;

    test[0] = "Easkldjfkasldj";
    test[1] = "sajsidfls";
    test[2] = "bszed";
    test[3] = "zzsef";
    test[4] = 0;
    
    ft_advanced_sort_string_tab(test, ft_strcmp);
    while (test[i])
        printf("%s\n", test[i++]);
    return (0);
}
