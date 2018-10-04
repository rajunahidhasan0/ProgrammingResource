#include<stdio.h>
int main()
{
    int a;

    printf("Enter the year:");

    scanf("%d",&a);

    if(a%400==0)
    {
        printf("This is a Leap Year")
    }
    else
    {
        if(a%100!=0 && a%4==0)
        {
            printf("This is a Leap Year");
        }
        else
        {
          printf("This is NOT a Leap Year");
        }
    }

    return 0;
}
