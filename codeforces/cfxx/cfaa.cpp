#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
#define MS(XX) memset(XX,0,sizeof(XX))
using namespace std;

int main()
{
    int i,j,a,x,b,ts,f=1,cn=0,n;
    char s[11];
   // freopen("test.txt","r",stdin);
    scanf("%d",&n);
    x=0;

    for(i=0;i<n;i++){
        scanf("%s",s);
        if(s[1]=='+')x++;
        else if(s[1]=='-')x--;
    }

    printf("%d\n",x);
    return 0;
}
