#include <stdio.h>
#include <unistd.h>

int	ft_atoi(const char *str)
{
	int i;
	int sign;
	int res;
	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}
int main()
{
    char *str ="-13268gfd33!";
    printf("%d", ft_atoi(str));
}