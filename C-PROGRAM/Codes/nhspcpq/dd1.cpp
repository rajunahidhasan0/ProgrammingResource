#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;
int ar[500009];
int main()
{
    int i,j,a,b,ts,f=1,cn=0,n,p=0;
    //freopen("test.txt","r",stdin);
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    for(i=0;i<(n-1);i++){
        for(j=i+1;j<n;j++){
            p++;
            if(ar[j]>ar[i])break;
        }
        //p+=j-i;
    }


    printf("%d\n",p);
    return 0;
}
