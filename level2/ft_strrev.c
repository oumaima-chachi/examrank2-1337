#include <unistd.h>
char *ft_strrev(char *str)
{
    int i = 0;
    int tool = 0;
    char temp;

    if (!str) 
        return NULL;
    while (str[tool])
        tool++;
   while (i < tool / 2)
   {
        temp = str[i];
        str[i] = str[tool - 1 - i];
        str[tool - 1 - i] = temp;
        i++;
   }

   return str;
}