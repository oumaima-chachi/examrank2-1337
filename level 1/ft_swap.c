#include <unistd.h>
#include <stdio.h>
void	ft_swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
int main()
{
    int a = 1;
    int b = 2;
    ft_swap(&a, &b);
    printf("%d, %d",a, b);
}