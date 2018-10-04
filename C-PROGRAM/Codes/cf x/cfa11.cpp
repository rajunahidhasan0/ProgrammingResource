#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;

int main()
{
    int i,j,a,b,ts,f=1,cn=0,n,l1,l2;
    char s1[100009],s2[100009];
   // freopen("test.txt","r",stdin);
    scanf(" %s %s" ,s1,s2);
    l1=strlen(s1);
    l2=strlen(s2);
    if(!strcmp(s1,s2)){
        puts("-1");

    }
    else printf("%d\n",max(l1,l2));

    return 0;
}
