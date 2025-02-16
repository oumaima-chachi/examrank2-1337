#include<stdlib.h>
int     *ft_rrange(int start, int end)
{
	//int size = (start>end)?(start -end+1) : (end-start+1);
	int *tab= malloc(10000000);
	// if(!tab)
	// 	return NULL;
	int i=0;
		
	if(start >= end)
	{
		while(start>= end)
		{
			tab[i]= end;
			end++;
			i++;
		}
	}
	if(start<= end)
	{
		while( start<= end)
		{
			tab[i]= end;
			end--;
			i++;
		}
	}
	return tab;
}

