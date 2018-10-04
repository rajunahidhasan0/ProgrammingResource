#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;
int tms[300];
int main()
{
    int i,j,a,b=0,ts,f=1,cn=0,n,ln,l2,mn;
    char s[200000],s2[]="Bulbasaur";
    scanf("%s",s);
    ln=strlen(s);
    l2=strlen(s2);
    for(i=0;i<ln;i++){
        tms[s[i]]++;
    }
    mn=tms['B'];
    tms['a']/=2;
    tms['u']/=2;
    for(i=0;i<l2;i++){
        if(tms[s2[i]]<mn){
            mn=tms[s2[i]];

        }
    }

    printf("%d\n",mn);
    return 0;
}
