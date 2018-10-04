#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;

int main()
{
    int i,j,a,b,ts,cn=0,ar[1000];
    char s[10000];
    freopen("test.txt","r",stdin);
    scanf("%d ",&ts);
    while(ts--){
        gets(s);
        puts(s);
        for(i=0;sscanf(s,"%d",&ar[i])==1;i++)P(ar[i])
        sort(ar,ar+i);
        printf("Case %d: Among %d numbers %d is maximum and %d is minimum\n",++cn,i,ar[i-1],ar[0]);
    }
    return 0;
}
