#include<unistd.h>
int ft_wdmatch(char *str, char *str1)
{
    int i;
    int j;
    i = 0;
    j = 0;
    while (str[i])
    {
        while (str1[j] && str[i] != str1[j])
            j++;
        if (str[i] != str1[j])
            return(0);
        i++;
        j++;
    }
    return(1);
}
int main(int ac, char **av)
{
    int i;
    i = 0;
    if (ac == 3)
        if (ft_wdmatch(av[1], av[2]))
            while (av[1][i])
                write(1, &av[1][i++], 1);
    write(1, "\n", 1);
return(0);
}
