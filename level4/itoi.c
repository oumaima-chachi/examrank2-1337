#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	int len = 0;
	int new = nbr;
	if(nbr < 0)
	{
		len++;
		nbr = -nbr;
	}
	while(nbr)
	{
		nbr /= 10;
		len++;
	}
	 
	char *res = malloc(sizeof(char *) * (len + 1));
	if(!res)
		return NULL;
	res[len]= '\0';
	len--;
	if(new == 0)
		return ("0");
	if(new < 0)
	{
		res[0]= '-';
		new = -new;
	}
	while(new)
	{
		res[len] = new % 10 + '0';
		new /= 10;
		len--;
	}
	return(res);
}
