#include<stdio.h>
int main()
{
    int num1,num2,sum,min,mul,div;
    printf("Please enter the number:");
    scanf("%d",& num1);
    printf("Please enter another number:");
    scanf("%d",&num2);
    sum=num1+num2;
    printf("%d\n",sum);
    min=num1-num2;
    printf("%d\n",min);
    mul=num1*num2;
    printf("%d\n",mul);
    div=num1/num2;
    printf("%d\n",div);
    return 0;
}
