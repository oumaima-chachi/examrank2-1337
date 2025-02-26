char	*ft_itoa(int nbr)
{
    int len = 0;
    int new = nbr;
    char *res;
    if (nbr == INT_MIN)
    {
        res = malloc(sizeof(char) * 12);
        if (!res)
        {
            return NULL;
        }
        res[0] = '-';
        res[1] = '2';
        res[2] = '1';
        res[3] = '4';
        res[4] = '7';
        res[5] = '4';
        res[6] = '8';
        res[7] = '3';
        res[8] = '6';
        res[9] = '4';
        res[10] = '8';
        res[11] = '\0'; 

        return res;
    }
    if (nbr < 0)
    {
        len++;
        nbr = -nbr;
    }
    while (nbr)
    {
        nbr/=10;
        len++;
    }
    res = malloc(sizeof(char) * (len + 1));
    if (!res)
    {
        return NULL;
    }
    if (new == 0)
    {
        res[0] = '0';
        res[1] = '\0';
        return res;
    }
    if (new < 0)
    {
        res[0] = '-';
        new = -new;
    }
    while (new)
    {
        res[--len] = new % 10 + '0';
        new/=10;
    }
    return res;
}
#include <stdio.h>

int main(void)
{
    printf("%s\n", ft_itoa(0));       // "0"
    printf("%s\n", ft_itoa(123));     // "123"
    printf("%s\n", ft_itoa(-456));    // "-456"
    printf("%s\n", ft_itoa(INT_MIN)); // "-2147483648"
    printf("%s\n", ft_itoa(INT_MAX)); // "2147483647"
    return 0;
}
