int     *ft_range(int start, int end)
{
    int i = 0;
    int size = end - start + 1;
    int *res;
    if (start > end)
    {
        return NULL;
    }
    res = malloc(sizeof(int) * size);
    if (!res)
    {
        return NULL;
    }
    i = 0;
    while (end >= start)
    {
        res[i] = start;
        start++;
        i++;
    }
    return res;
}
