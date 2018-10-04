#include<stdio.h>
int main()
{
    int o=1,i;

    while(o<=10)
    {
        for(i=1;i<=10;i=i+1)
        {
            printf("%d*%d=%d\n",o,i,o*i);
        }
        o++;
    }

    return 0;
}
