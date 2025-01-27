#include <unistd.h>

int	main(int ac, char **av)
{
	unsigned char	omy[256] = {0};
	int				i;
	int				j;

	if (ac == 3)
	{
		i = 0;
		j = 0;
		while (av[1][i])
		{
			if (!omy[(unsigned char)av[1][i]])
			{
				write(1, &av[1][i], 1);
				omy[(unsigned char)av[1][i]] = 1;
			}
			i++;
		}
		while (av[2][j])
		{
			if (!omy[(unsigned char)av[2][j]])
			{
				write(1, &av[2][j], 1);
				omy[(unsigned char)av[2][j]] = 1;
			}
			j++;
		}
	}
    write (1, "\n", 1);

}
