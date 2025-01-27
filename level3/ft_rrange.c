#include <stdio.h>
#include <stdlib.h>
int *ft_rrange(int start, int end)
{
    int i = 0;
    int len;
    if (start <= len)
    {
        len = end - start + 1;
    }
    else
    {
        len = start - end + 1;
    }
    int *res = (int *)malloc(sizeof(int) * len);
    if (!res)
    {
        return NULL;
    }
    if (start <= end)
    {
        while (i < len)
        {
            res[i] = end -1;
            i++;
        }
    }
    else
    {
        while (i < len)
        {
            res[i] = end - 1;
            i++;
        }
    }
    return res;
    
}