#include<stdio.h>
int main()
{
    double num1,num2;
    printf("Enter the first number:");
    scanf("%lf",&num1);
    printf("Enter the another number:");
    scanf("%lf",&num2);
    printf("%0.0lf+%lf=%0.2lf\n",num1,num2,num1+num2);
    printf("%0.0lf-%lf=%0.3lf\n",num1,num2,num1-num2);
    printf("%0.0lf*%lf=%0.4lf\n",num1,num2,num1*num2);
    return 0;/*my programme.......
    mm*/
}
