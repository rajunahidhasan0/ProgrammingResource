#include <bits/stdc++.h>
using namespace std;

vector <int> adj[110];
int max1,max2,max3,d;
int vis[110];
int level[110];
void bfs(int i,int p)
{
    int u,v;
    queue <int> vc;
    vc.push(i);
    level[i]=0;
    vis[i]=1;
    while(!vc.empty()){
        u=vc.front();
        vc.pop();
        for(int k=0;k<adj[u].size();k++){
            v=adj[u][k];
            if(vis[v]==0){
                vis[v]=1;
                level[v]=level[u]+1;
                vc.push(v);
                if(level[v]>max1 && p==0){
                    max1=level[v];
                    max2=v;
                }
                if(v==d && p==1){
                    max3=level[v];
                    return;
                }
            }
        }
    }
}
int main(void)
{
    int i,j,k,l,tes,cn,a,b,c,m,n;
    scanf("%d",&tes);
    for(cn=0;cn<tes;cn++){
        max1=max2=max3=0;
        memset(vis,0,sizeof vis);
        memset(level,0,sizeof level);
        scanf("%d %d",&a,&b);
        for(int i=0;i<b;i++){
            scanf("%d %d",&m,&n);
            adj[m].push_back(n);
            adj[n].push_back(m);
        }
        scanf("%d %d",&c,&d);
        bfs(c,0);
        k=max1;
        memset(vis,0,sizeof vis);
        memset(level,0,sizeof level);
        bfs(max2,1);
        k+=max3;
        printf("Case %d: %d\n",cn+1,k);
    }
    return 0;
}
