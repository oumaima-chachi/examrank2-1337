#include <unistd.h>

void	ft_putnbr(int n)
{
	char	c;

	if (n >= 10)
		ft_putnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}
int	is_prime(int num)
{
	int	i;

	if (num < 2)
	{
		return (0);
	}
	i = 2;
	while (i < num)
	{
		if (num % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
int	main(int argc, char **argv)
{
	int i = 0;
	int num = 0;
	if (argc != 2)
	{
		write(1, "0\n", 2);
	}
	while (argv[1][i])
	{
		num = num * 10 + (argv[1][i] - '0');
		i++;
	}
	int sum = 0;
	i = 2;
	while (i <= num)
	{
		if (is_prime(i))
		{
			sum += i;
		}
		i++;
	}
	ft_putnbr(sum);
	write(1, "\n", 1);
}