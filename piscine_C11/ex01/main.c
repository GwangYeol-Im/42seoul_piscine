#include <unistd.h>
#include <stdio.h>

int		*ft_map(int *tab, int length, int(*f)(int));

int     plus(int n)
{
    return (n + 10);
}

int     main(void)
{
    int arr[4] = {1, 2, 3, 4};
    int length = 4;
    int *result;

    result = ft_map(arr, length, *plus);
    for (int i = 0; i < length; i++)
        printf("%d", result[i]);
    return (0);
}