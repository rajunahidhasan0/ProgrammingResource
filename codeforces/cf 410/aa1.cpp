#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
#define MS(XX) memset(XX,0,sizeof(XX))
using namespace std;

int main()
{
    int i,j,a,b,ln,ts,f=1,cn=0,n;
    char s[100],s2[100];
    //freopen("test.txt","r",stdin);
    scanf("%s",s);
    ln=strlen(s);
    strcpy(s2,s);
    reverse(s2,s2+ln);
    int c=0;

    for(i=0;i<(ln/2);i++){
        if(s[i]!=s2[i])c++;
    }
    if(c>1||(c==0&&ln%2==0))puts("NO");
    else puts("YES");
    //printf("%d\n");
    return 0;
}
