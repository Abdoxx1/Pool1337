#include<stdlib.h>
int num_world(char *str)
{
    int i;
    int nw;
    i = 0;
    nw = 0;
    while (str[i])
    {
        while (str[i]== ' ' || str[i] =='\t' || str[i] == '\n')
                i++;
        if (str[i])
        {
            while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
                i++;
            nw++;
        }
    }
    return(nw);
}
int     str_len(char *str, int i)
{
    int c;
    c = 0;
    while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
    {
        i++;
        c++;
    }
    return(c);
}

char    **ft_split(char *str)
{
    char **tab;
    int i;
    int j;
    int k;
    tab = (char**)malloc(num_world(str) + 1 * sizeof(char *));
    if (!tab)
        return(0);
    i = 0;
    j = 0;
    while (str[i])
    {
        k = 0;
        while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            i++;
        if (str[i])
        {
            tab[j] = (char*) malloc(str_len(str, i) + 1 * sizeof(char));
            if (!tab[j])
                return(0);
            while (str[i] && str[i] != '\t' && str[i] != ' ' && str[i] != '\n')
            {
                tab[j][k] = str[i];
                i++;
                k++;
            }
            tab[j][k] = '\0';
            j++;
        }
        tab[j] = NULL;
    }
    return(tab);
}

#include<stdio.h>
int main(void)
{
    char **tab;
    int i;
    tab = ft_split("  yabas was here !");
    i = 0;
    while (i <= 4)
    {
        printf("tab[%d] = %s\n", i, tab[i]);
        i++;
    }
    return(0);
}
