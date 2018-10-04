#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
#define MS(XX) memset(XX,0,sizeof(XX))
using namespace std;

int main()
{
    int i,j,a,b,ts,f=1,cn=0,n,ar[200009];
    ll mx,s;
    //freopen("test.txt","r",stdin);
    scanf("%d",&n);
    scanf("%d",&ar[0]);
    for(i=1;i<n;i++){
        scanf("%d",&ar[i]);
        ar[i-1]=abs(ar[i-1]-ar[i]);
    }
    n--;
    mx=s=0;
    for(i=0;i<n;i++){
        if(i%2==0)s+=ar[i];
        else s-=ar[i];
        mx=max(s,mx);
        if(s<0)s=0;
    }
    s=0;
    for(i=0;i<n;i++){
        if(i%2==1)s+=ar[i];
        else s-=ar[i];
        mx=max(s,mx);
        if(s<0)s=0;
    }

    printf("%lld\n",mx);
    return 0;
}
