#include <stdio.h>
#include <stdlib.h>
void		ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *));

int			ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s1[i] > s2[i])
		return (s1[i] - s2[i]);
	return (0);
}

int         main(void)
{
    char    **test = (char **)malloc(sizeof(char *) * 7);
    int     i = 0;

    test[0] = "6E";
    test[1] = "T";
    test[2] = "IK";
    test[3] = "Df";
    test[4] = "NO";
    test[5] = "vm";
    test[6] = "fE";
    test[7] = 0;
    
    ft_advanced_sort_string_tab(test, ft_strcmp);
    while (test[i])
        printf("%s\n", test[i++]);
    return (0);
}
