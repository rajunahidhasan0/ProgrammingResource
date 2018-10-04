#include<stdio.h>
int main()
{
    float F,C;

    printf("Enter the tempreture in Farenhite scale:");

    scanf("%f",&F);

    C=((F-32)/9)*5;

    printf("The temprature in Celcius scale:%0.2f\n",C);

    return 0;
}
