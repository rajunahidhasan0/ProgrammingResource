#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;
vector <int > vt[100009];
int cn[10001][10001];
int main()
{
    int i,j,k,a,b,ts,f=1,n,t=0,e,s;

   // freopen("test.txt","r",stdin);
    scanf("%d %d",&n,&e);


    for(i=0;i<e;i++){
        scanf("%d %d",&a,&b);
        if(a>b)swap(a,b);
        vt[a].push_back(b);
         cn[a][b]++;
    }
    if(n<=5000){
        for(i=1;i<=n;i++){
        s=vt[i].size();
        for(j=0;j<s;j++)
        {
            int p=vt[i][j];
            for(k=0;k<vt[p].size();k++)
                if(cn[i][vt[p][k]])    t++;
        }
//        t+=(s*(s-1))/2;
    }


    }
    else {
    for(i=1;i<=n;i++){
        s=vt[i].size();
        t+=(s*(s-1))/2;
    }
}
    printf("%d\n",t);
    return 0;
}
