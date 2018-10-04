#include <bits/stdc++.h>
#define P(X) printf("db %d\n",X);
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;

int main()
{
    int i,j,a,b,ts,f=1,cn=0,n,c=0,l1,l2;
    char s1[100006],s2[100];
    //freopen("test.in","r",stdin);
    scanf("%s %s",&s1,&s2);
    l1=strlen(s1);
    l2=strlen(s2);
    for(i=0;i<l1;i++){
        for(j=0;j<l2;j++){
            if(s1[i+j]!=s2[j])break;
        }
        if(j==l2){
            c++;
            i=i+j-1;
        }
    }
    printf("%d\n",c);
    return 0;
}
