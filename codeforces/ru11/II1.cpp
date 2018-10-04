#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;

int main()
{
    int i,j,a,c=0,ts,f=1,cn=0,n,x;
    //freopen("test.txt","r",stdin);
    scanf("%d",&n);
    for(i=30;i>=0;i--){
        x=pow(2,i);
        if(n>=x){
            n-=x;
            c++;
        }
    }

    printf("%d\n",c);
    return 0;
}
