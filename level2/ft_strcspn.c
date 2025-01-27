#include <stdio.h>
#include <unistd.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    size_t i = 0 ;
    size_t count = 0;
    while (*s)
    {
        while (reject[i] && *s != reject[i])
        {
            i++;
        }
        while (reject[i])
        {
            return count;
        }
        i = 0;
        count++;
        s++;
    }
    return count;

}
int main()
{
    printf("%d",ft_strcspn("bonjour","ur"));
}