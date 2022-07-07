#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	*tab;
	int	size;
	int	i;

	i = 0;
	size = (end >= start) ? end - start + 1 : start - end + 1;
	if (!(tab = (int*)malloc(sizeof(int) * size)))
		return (NULL);
	while (i < size)
		tab[i++] = (end >= start) ? start++ : start--;
	return (tab);
}
#include<stdio.h>
int main()
{
    int *tab;
    tab = ft_range(0, -3);
    int i = 0;
    while (i <= 3)
    {
        printf("tab[%d] = %d\n", i, tab[i]);
        i++;
    }
    
}
