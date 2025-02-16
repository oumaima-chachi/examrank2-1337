#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int i = 0;
    int tool = 0;
    char *cp;
    while (src[tool])
    {
        tool++;
    }
    cp = malloc(sizeof(*cp) * (tool + 1));
    if (!cp)
    {
        return NULL;
    }
    while (i < tool)
    {
        cp[i] = src[i];
        i++;
    }
    cp[i] = '\0';
    return cp;
}