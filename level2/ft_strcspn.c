#include <stdio.h>
#include <unistd.h>

#include <stddef.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    size_t count = 0;
    int i;

    while (*s)
    {
        i = 0;
        while (reject[i])
        {
            if (*s == reject[i])
                return count; // Arrêt dès qu'on trouve un caractère interdit
            i++;
        }
        count++;
        s++;
    }
    return count;
}
int main()
{
    printf("%d",ft_strcspn("bonjour","ur"));
}