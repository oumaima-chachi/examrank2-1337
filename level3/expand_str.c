#include <unistd.h>
void expand_str(char *str)
{
    int i = 0;
    int space;
    while (str[i] == ' ' || str[i] == '\t')
    {
        i++;
    }
    while (str[i])
    {
        if (str[i] == ' ' || str[i] == '\t')
        {
            space = 1;
        }
        else
        {
            if (space)
            {
                write (1, "   ", 1);
                space = 0;
            }
            write (1, &str[i], 1);
        }
        i++;
    }
}
int main(int argc, char **argv)
{
    int i = 0;
    if (argc != 2)
    {
        write (1, "\n", 1);
    }
    expand_str(argv[1]);
    write (1, "\n", 1);
}