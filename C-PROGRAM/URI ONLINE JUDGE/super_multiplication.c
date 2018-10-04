#include<stdio.h>
int main()
{
    int a,b,c,d,e,n=1,i;
	printf("Enter a Number: ");
    scanf("%d",&a);
	while(1){	
	    b=a%10;
	
	    a=a/10;
		
	    n=n*b;
	    if(a<=0)break;
	}
    printf("%d\n",n);

    return 0;
}
