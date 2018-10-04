#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
#define MS(XX) memset(XX,0,sizeof(XX))
using namespace std;

int main()
{
    int i,j,a,b,ts,f=1,cn=0,n,c,x;
    //freopen("test.txt","r",stdin);
    scanf("%d%d%d",&a,&b,&c);
    scanf("%d",&n);
    cn=0;
    for(i=0;i<n;i++){
        scanf("%d",&x);
        if(x>b&&x<c)cn++;
        //P(x)
    }

    printf("%d\n",cn);
    return 0;
}
