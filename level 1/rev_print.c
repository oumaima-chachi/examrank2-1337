#include <stdio.h>
#include <unistd.h>

char	*rev_print(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	while (i--)
	{
		write(1, &str[i], 1);
	} 
    return str;
}

int	main(void)
{
	rev_print("Hello world");
	write(1, "\n", 1);
	rev_print("tnirp esreveR");
	write(1, "\n", 1);
	rev_print("");
	write(1, "\n", 1);
}