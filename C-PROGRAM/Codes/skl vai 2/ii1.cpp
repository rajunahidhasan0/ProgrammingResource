#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;

int main()
{
    int i,j,a,b,ts,f=1,cn=0,n,k,x,p;
    //freopen("test.txt","r",stdin);
    scanf("%d %d",&n,&k);
    p=0;
    for(i=0;i<n;i++){
        scanf("%d",&x);
        if((x+k)<6)p++;
    }
    printf("%d\n",p/3);
    return 0;
}
