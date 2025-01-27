#include <stdio.h>
#include <unistd.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	int i = 0;
	int count = 0;
	while (*s)
	{
		while (accept[i] && *s != accept[i])
		{
			i++;
		}
		while (accept[i] == '\0')
		{
			return (count);
		}
		i = 0;
		count++;
		s++;
	}
	return (count);
}
int main()
{
    printf("%d",ft_strspn("bonjour","n"));
}