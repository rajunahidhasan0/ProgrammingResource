#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
#include<stdio.h>
int main()
{
    long long a,b;
    int count,c;
    while(scanf("%lld %lld", &a, &b) && a!=0 && b!=0)
    {
            count=c=0;
            while(a||b){
                    c=(a%10+b%10+c)/10;
                    a=a/10;
                    b=b/10;
                    count=count+c;
            }

            if(!count)
                printf("No carry operation.\n");
            else if(!(count^1))
                printf("1 carry operation.\n");
            else
                printf("%d carry operations.\n",count);
    }
    return 0;
}
