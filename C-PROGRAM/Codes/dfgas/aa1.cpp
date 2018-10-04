#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;
int ar[100009];
int main()
{
    int i,j,a,b,ts,f=1,cn=0,n,x;
    //freopen("test.txt","r",stdin);
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    sort(ar,ar+n);
    x=ar[n-1];
    for(i=n-1;i>=0;i--){
        if(x==ar[i])ar[i]=-1;
        else break;

    }
    x=ar[0];
    for(i=0;i<n;i++){
        if(x!=ar[i])break;

    }
    x=0;
    for(;i<n;i++){
        if(ar[i]==-1)break;
        else x++;
    }

    printf("%d\n",x);
    return 0;
}
