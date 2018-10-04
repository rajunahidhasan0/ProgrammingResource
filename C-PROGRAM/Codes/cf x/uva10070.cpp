#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;

int main()
{
    int i,j,a=0,b,ts,cn=0,l,od;
    ll n;
    char s[100000];
    freopen("test.txt","r",stdin);
    while(scanf("%lld",&n)==1){
        if(a)puts("");
        else a=1;
        l=0;
        od=1;
        if(n%400==0||(n%4==0&&n%100==0)){
            printf("This is leap year.\n");
            l=1;
            od=0;
        }
        if(n%15==0)od=0,printf("This is huluculu festival year.\n");
        if(n%55==0&& l==1)printf("This is Bulukulu festival year.\n");
        if(od) printf("This is an ordinary year.\n");
    }
    return 0;
}

