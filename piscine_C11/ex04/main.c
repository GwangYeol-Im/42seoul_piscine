#include <stdio.h>

int ft_is_sort(int *tab, int length, int (*f)(int, int));

int my_func(int n1, int n2)
{
	return (n1 - n2);
}

int main(void)
{
	int tab[] = {1, 2, 3, 4, 3};
	printf("%d\n", ft_is_sort(tab, 5, &my_func));
	int tab1[] = {-1, -3, -5, -7};
	printf("%d\n", ft_is_sort(tab1, 4, &my_func));
	int tab2[] = {2, 1};
	printf("%d\n", ft_is_sort(tab2, 2, &my_func));
  	int tab3[] = {0,-1,2};
	printf("%d\n", ft_is_sort(tab3, 3, &my_func));
 
	return 0;
}