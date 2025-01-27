#include <unistd.h>
#include <stdio.h>
char *ft_strrev(char *str)
{
     int i = -1;
     int tool = 0;
     int temp;
     while (str[tool])
     {
        tool++;
     }
     while (++i < tool / 2)
     {
        temp = str[i];
        str[i] = str[tool - 1 - i];
        str[tool - 1 - i] = temp;
     }
     return str;
 
}