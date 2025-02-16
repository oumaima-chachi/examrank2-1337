#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
    int i;
    int size;
    int *r;

    size = max - min;
    if (min >= max)
        return (NULL);
    r = malloc(sizeof(int) * size);
    // if (!r)
    //     return (NULL);
    i = 0;
    while (min < max)
    {
        r[i] = min;
        min++;
        i++;
    }
    return (r);
}

int main()
{
    int min = -1;
    int max = 3;
    int *intrange = ft_range(min, max);

    if (intrange == NULL)
    {
        printf("Erreur d'allocation mémoire ou plage invalide.\n");
        return (1);
    }

    // Affichage du tableau
    for (int i = 0; i < (max - min); i++)
    {
        printf("%d ", intrange[i]);
    }
    printf("\n");

    // Libérer la mémoire allouée
    free(intrange);
    return (0);
}
