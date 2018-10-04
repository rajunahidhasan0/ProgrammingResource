#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
#define MS(XX) memset(XX,0,sizeof(XX))
using namespace std;

int main()
{
    int i,j,a,b,ln,ts,f=1,cn=0,n,c=0;;
    char s[100000],s2[100000];
    string ss;
    //freopen("test.txt","r",stdin);
    cin>>ss;
    //scanf("%s",s);
    while(ss.replace(ss.begin(),ss.end(),"ab")){
        P(ss);
        c++;
    }


    printf("%d\n",c);
    return 0;
}
