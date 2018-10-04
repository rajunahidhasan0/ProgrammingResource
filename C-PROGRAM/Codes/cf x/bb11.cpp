#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;

int main()
{
    int i,j,a,b,ts,f=1,cn=0,n,ar[100009];
    //freopen("test.txt","r",stdin);
    scanf("%d",&n);
    for(i=0;i<n;i++){
            scanf("%d",&ar[i]);
    }
    sort(ar,ar+n);
    f=0;
    for(i=2;i<n;i++){
        if(ar[i-2]+ar[i-1]>ar[i]){
            f=1;
            break;
        }
    }
    if(f)puts("YES");
    else puts("NO");
    return 0;
}
