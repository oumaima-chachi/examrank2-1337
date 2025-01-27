
#include <stdlib.h>
int *ft_range(int start, int end)
{
    int i = 0;
    if (start >= end)
    {
        return NULL;
    }
    int *res = (int *)malloc(sizeof(int) * (end - start));
    if (!res)
    {
        return NULL;
    }
    int a = end - start;
    while (a--)
    {
        res[i] = start;
        i++;
        start++;
    }
    return res;
}  
