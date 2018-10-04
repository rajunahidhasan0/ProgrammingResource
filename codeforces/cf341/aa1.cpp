#include <bits/stdc++.h>
#define P(X) printf("db %d\n",X);
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;

int main()
{
    ll i,j,a,b,ts,f=1,cn=0,s=0,n,mn=2e9,m;
    //freopen("test.in","r",stdin);

    cin>>n;
    for(i=0;i<n;i++){
        cin>>m;
        s+=m;
        if(m%2==0){

        }
        else {
            if(m<mn)mn=m;
        }
    }
    if(s%2)s-=mn;
    cout<<s<<endl;
    return 0;
}
