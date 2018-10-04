#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;

int main()
{
    int i,j,a,b,ts,cn=0,n,r,x,y;
    //freopen("test.txt","r",stdin);
    //scanf("%d",&ts);
    while(1){
        scanf("%d%d",&a,&b);
        x=a;
        y=b;
        if(!(a+b))break;
        if(a<b)swap(a,b);
        if(b==1)r=a;
        else if(b==2){
            if(a>3){
                r=(a/4)*4;
                r+=2*min((a%4),2);
            }
            else r=4;

        }
        else r=ceil((a*b/2.0));
        printf("%d knights may be placed on a %d row %d column board.\n",r,x,y);
    }
    return 0;
}

