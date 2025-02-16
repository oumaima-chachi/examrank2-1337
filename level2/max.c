#include <limits.h> 

int max(int *tab, unsigned int len)
{
    unsigned int i = 0;
    int result;

    if (len == 0)
        return INT_MIN; 

    result = tab[0];
    while (i < len)
    {
        if (tab[i] > result)
            result = tab[i]; 
        i++;
    }
    return result;
}