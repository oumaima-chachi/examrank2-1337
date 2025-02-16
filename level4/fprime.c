#include<stdio.h>
#include<stdlib.h>
int main(int argc , char **argv)
{
    if(argc==2)
    {
        int nb= atoi(argv[1]);
       // int result =2;
        // if(nb==2)
        // {
        //     printf("%d\n",2);
        //     return 0;
        // }
        if(nb==1)
        {
            printf("%d\n",2);
            return 0;
        }
        int i=2;
        while(nb>=i)
        {
            if(nb%i==0)
            {
                printf("%d",i);
                nb/=i;
                if(nb>1)
                    printf("*");
            }
            else   
                i++;
        }

    }
    printf("\n");
    return 0;

}