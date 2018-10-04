#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;
int ar[1000009];
int siv()
{
    int i,j,r=1002,n=1000005;
    ar[1]=1;
    for(i=2;i<r;i++){
        if(ar[i]==0)
        for(j=i*i;j<n;j+=i)ar[j]=1;
    }
}
int main()
{
    int i,j,a,b,ts,f=1,cn=0,n;
    //freopen("test.txt","r",stdin);
    siv();
    scanf("%d",&n);
    for(i=1;i<=1000;i++){
        if(ar[n*i+1])break;
    }

    printf("%d\n",i);
    return 0;
}
