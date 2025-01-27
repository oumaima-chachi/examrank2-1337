#include <unistd.h>
unsigned int ft_atoi(char *str)
{
    int res = 0;
    int i = 0;
    while (str[i] && str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + str[i] - 48;
        i++;
    }
    return res;
}
void put_hex(int nbr)
{
    char *digit = "0123456789abcdef";
    if (nbr >= 16)
    {
        put_hex(nbr / 16);
    }
    nbr = digit[nbr % 16];
    write (1, &nbr, 1);
}
int main(int argc, char **argv)
{
    if (argc == 2)
    {
        put_hex(ft_atoi(argv[1]));
    }
    write (1, "\n", 1);
}