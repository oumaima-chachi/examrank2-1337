#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

int *ft_range(int start, int end)
{
    int size = (start <= end) ? (end - start + 1) : (start - end + 1);
    int *res = malloc(sizeof(int) * size);
    if (!res)
        return NULL;

    for (int i = 0; i < size; i++)
    {
        res[i] = (start <= end) ? (start + i) : (start - i);
    }

    return res;
}
