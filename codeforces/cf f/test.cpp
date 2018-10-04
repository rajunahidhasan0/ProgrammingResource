#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t2.txt","w",stdout);
using namespace std;

int main()
{
    ll i,j,a,b,ts,cn=0,n,f=1,v,ln,p,x;
    char s[10000],s2[1000],*s3="ABCDEFGHIJKLMNO";
    //freopen("test.txt","r",stdin);
    printf("started\n");
    //scanf("%d %s",&n,s);
    for(j=2;j<16;j++){
    strcpy(s2,s3);
    s2[j]=0;
    strcpy(s,s2);
    ln=strlen(s);
    p=x=1;
    while(next_permutation(s,s+ln)){
        p++;
        for(i=0;i<ln;i++){
            if(s[i]==s2[i]){
                //puts(s);
                x++;
                break;
            }
        }
    }
    //P(x)
    printf(" %lld %.10lf\n",ln,x/(double)p);
    }
   // printf("%d %s",n,s);

    return 0;
}
