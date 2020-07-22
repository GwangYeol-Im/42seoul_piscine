#include <stdio.h>

int ft_is_sort(int *tab, int length, int (*f)(int, int));

int my_func(int n1, int n2)
{
	return (n1 - n2);
}

int main(void)
{
	int tab[] = {7, 7, 7, 7, 7, 6, 6, 6, 6, 5, 4, 4, 4, 4, 3, 3, 3, 3};
	printf("%d\n", ft_is_sort(tab, 18, &my_func));
	int tab1[] = {0, 0, -1, -3, -5, -7};
	printf("%d\n", ft_is_sort(tab1, 6, &my_func));
	int tab2[] = {2, 1, 3};
	printf("%d\n", ft_is_sort(tab2, 3, &my_func));
  	int tab3[] = {0, -1, 2, 0};
	printf("%d\n", ft_is_sort(tab3, 4, &my_func));
 
	return 0;
}