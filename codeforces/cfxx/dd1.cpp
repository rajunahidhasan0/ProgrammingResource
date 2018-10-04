#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
#define MS(XX) memset(XX,0,sizeof(XX))
using namespace std;
char s[1000009];
int main()
{
    int i,j,a,b,ts,f=1,cn=0,n,pt=1E6,p,ln,tln,kp,x,tx,lp;
    //freopen("test.txt","r",stdin);
    scanf("%d %[^\n]s",&p,s);
    ln=strlen(s);
    s[ln-1]=' ';
    x=0;
    pt=ln;
    for(i=0;i<ln;i++){
        if(s[i]=='-'||s[i]==' '){
            s[i]=' ';
            if(x==0)pt=min(i-x+1,pt);
            else pt=max(i-x,pt);
            x=i;
        }
    }
    //P(pt)
    pt=max(pt,ln/p);
    lp=0,tx=0;
    for(i=pt;i<ln;i++){
        lp=tln=0;
        for(j=1;j<=ln;j++){
            if(s[j-1]==' '){
                tx=j;
            }
            if(j-lp>=i){
          //      P(tx)
                lp=tx;
                tln++;
            }
        }
        if(lp!=ln)tln++;
        //P(tln)
        if(tln<=p)break;
    }
    printf("%d\n",i);
    return 0;
}
