#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
#define MS(XX) memset(XX,0,sizeof(XX))
using namespace std;
char s[300009],s1[300009],s2[300009];
int main()
{
    int i,j,a,b,ts,f=1,cn=0,ln;

    //freopen("test.txt","r",stdin);
    scanf("%s %s",s1,s2);
    ln=strlen(s1);
    sort(s1,s1+ln);
    sort(s2,s2+ln);
    reverse(s2,s2+ln);
    for(i=0;i<ln;i++){
        if(i%2==0){
            s[i]=s1[i/2];
        }
        else {
            s[i]=s2[i/2];
        }
    }
    s[ln]='\0';
    printf("%s\n",s);
    return 0;
}
