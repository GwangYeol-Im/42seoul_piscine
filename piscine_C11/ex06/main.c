#include <stdio.h>
void		ft_sort_string_tab(char **tab);

int         main(void)
{
    char    **test;
    int     i = 0;

    test[0] = "ad";
    test[1] = "ab";
    test[2] = "abd";
    test[3] = "sef";
    test[4] = 0;
    
    ft_sort_string_tab(test);
    while (test[i])
        printf("%s\n", test[i++]);
    return (0);
}
