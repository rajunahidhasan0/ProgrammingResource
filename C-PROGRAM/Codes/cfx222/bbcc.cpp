#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;
char s[2000009];
int main()
{
    int i,j,a,b,ts,cn=0,n,z,t,rm,r;
    freopen("test.txt","r",stdin);
    scanf("%d",&ts);
    while(ts--){
        scanf("%d %s",&n,s);
        z=0;
        r=0;
        rm=0;
        for(i=0;i<n;i++){
            if(s[i]=='0'){
                s[n+i]='0';
            }
            else break;
        }
        s[n+i]=0;
        a=i;
        for(;i<(n+a);i++){
            if(s[i]=='0'){
                z++;
                r++;
                rm=max(r,rm);
                if(s[i+1]=='0'){

                }

            }
            else r=0;

        }
        printf("%d\n",z-rm);
    }
    return 0;
}
