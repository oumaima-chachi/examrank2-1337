#include <unistd.h>
int ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int res = 0;
    int s= 1;
    while ((str[i] == ' ') || (str[1] >= 9 && str[i] <= 13))
    {
        i++;
    }
    if (str[i] == '-')
    {
        s = -1;
        i++;
    }
    if (str[i] == '+' && str[i] == '-')
    {
        i++;
    }
    while (str[i])
    {
        int value;
        if (str[i] >= '0' && str[i] <= '9')
        {
            value = str[i] - '0';
        }
        else if (str[i] >= 'a' && str[i] <= 'f')
        {
            value = 10 + (str[i] - 'a');
        }
        else if (str[i] >= 'A' && str[i] <= 'F')
        {
            value = 10 + (str[i] - 'A');
        }
        else
        {
            break;
        }
        if (value >= str_base)
        {
            break;
        }
        res = res * str_base + value;
        i++;
    }
    return res * s;
}