#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
#define MS(XX) memset(XX,0,sizeof(XX))
using namespace std;
char s[300000];
int main()
{
    int i,j,a,b,ts,f=1,cn=0,n,x;
    //5freopen("test.txt","r",stdin);
    scanf("%d",&n);
    a=n/2+2;
    for(i=0;i<=a;i++){
        x=2*i;
        if(i%2){
            s[x]=s[x+1]='a';
        }
        else {
            s[x]=s[x+1]='b';
        }
    }
    s[n]='\0';
    puts(s);
    return 0;
}
