#include <unistd.h>
unsigned int lcm(unsigned int a, unsigned int b)
{
    unsigned int max;
    if (a == 0 || b == 0)
    {
        return 0;
    }
    max = (a > b) ? a : b;
    while (1)
    {
        if (max % a == 0 && max % b == 0)
        {
            return max;
        }
        max++;
    }
}
#include <stdio.h>

int main()
{
    printf("%u\n", lcm(4, 6));   // Affiche 12
    printf("%u\n", lcm(5, 10));  // Affiche 10
    printf("%u\n", lcm(0, 5));   // Affiche 0
    printf("%u\n", lcm(7, 3));   // Affiche 21
    return 0;
}