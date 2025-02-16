#include <stdio.h>
#include <unistd.h>

size_t ft_strspn(const char *s, const char *accept)
{
    size_t i;
    size_t count;

    count = 0;
    i = 0;
    while (*s)
    {
        while (accept[i])
        {
            if (*s == accept[i])
                break;
            i++;
        }
        if (accept[i] == '\0')
            return (count);
        count++;
        s++;
    }
    return (count);
}
#include <stdio.h>

int main()
{
	printf("%d", ft_strspn("bonjour", "bon"));
}