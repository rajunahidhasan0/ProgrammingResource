#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector <int> adj[100005];
int val[100005],cnt,lvl,level[100005];

void dfs(int node)
{
    int u,sum=0,pre=cnt,cpr=lvl;

    if(adj[node].size()==0){
        val[node]=0;
        level[node]=lvl;
        return;
    }

    for(int j=0;j<adj[node].size();j++){
        u=adj[node][j];
        cnt++;
        lvl++;
        dfs(u);
        sum+=cnt-pre;
        pre=cnt;
        lvl=cpr;
    }

    val[node]=sum;
    level[node]=cpr;

    return;
}

int main(void)
{
    ll cn=0,tes,a,b,c,m=0,n,sum=0;
    scanf("%lld",&tes);
    while(tes--){
        for(int i=0;i<=m;i++){
            adj[i].clear();
        }
        memset(val,0,sizeof val);
        memset(level,0,sizeof level);
        cnt=0;
        lvl=0;
        sum=0;
        scanf("%lld",&n);
        for(int i=0;i<n-1;i++){
            scanf("%lld %lld",&a,&b);
            adj[a].push_back(b);
        }
        dfs(1);
        for(int i=2;i<=n;i++){
            sum+=n-level[i]-1-val[i];
        }
        printf("Case %lld: %lld %lld\n",++cn,n-1,sum/2);
        m=n;
    }
    return 0;
}










