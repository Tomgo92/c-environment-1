#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if(argc<2)
    {
        for(int i=1;i<=10;i++)
        {
            printf("%d\n",i);
        }
    }
    else
    {
        int N=atoi(argv[1]);
        for(int i=1;i<=N;i++)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
 
