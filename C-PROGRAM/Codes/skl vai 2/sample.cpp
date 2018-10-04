#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;

int main()
{
    int i,j,a,b,ts,f=1,cn=0,n,mx,l;
    //freopen("test.txt","r",stdin);
    scanf("%d",&n);
    scanf("%d",&a);
    mx=1;
    l=1;
    for(i=1;i<n;i++){
        scanf("%d",&b);
        if(b>=a)l++;
        else l=1;
        mx=max(mx,l);
        a=b;
    }
    printf("%d\n",mx);
    return 0;
}
