#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;

int main()
{
    int i,j,a,b,ts,f=1,cn=0,n,in,v,ln;
    freopen("test.txt","r",stdin);
    char s[100000],s2[1000000];
    while(gets(s)){
        ln=strlen(s);
        in=0;
        if(isalpha(s[0])){
            for(i=0;i<ln;i++){
                sprintf(s2+in,"%d",s[i]);
                while(s2[in]!=0)in++;
            }
            reverse(s2,s2+in);
        }
        else {
            reverse(s,s+ln);
            in=0;
            for(i=0;i<ln;i++){
                if(s[i]=='1'){
                    v=100;
                    v+=(s[i+1]-'0')*10;
                    v+=(s[i+2]-'0');
                    i+=2;

                }
                else {
                    v=0;
                    v+=(s[i]-'0')*10;
                    v+=(s[i+1]-'0');
                    i+=1;

                }
                s2[in]=v;
                in++;
            }
            s2[in]=0;
           // P(in)
        }
        puts(s2);
    }

   // printf("%d\n");
    return 0;
}
