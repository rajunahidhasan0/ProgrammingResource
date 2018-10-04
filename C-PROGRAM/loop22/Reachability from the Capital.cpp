#include<bits/stdc++.h>
using namespace std;
vector<int>vt[5010];
int vis[5010];
int mark[5010];
int bfs(int x)
{
    queue<int>Q;
    Q.push(x);
    mark[x]=1;
    vis[x]=1;
    while(!Q.empty())
    {
        int p=Q.front();
        Q.pop();
        for(int i=0; i<vt[p].size(); i++){
            int y=vt[p][i];
            if(!vis[y]){
                Q.push(y);
                mark[y]=1;
                vis[y]=1;
            }
        }
    }
    return 0;
}
int main()
{
   ///freopen("test.txt","r", stdin);
     int n, m, s;
        for(int i=0 ; i<5001 ; i++){
            vt[i].clear();
        }
        int u, v;
    cin>>n>>m>>s;
    for(int i=0 ; i<m ; i++){
        cin>>u>>v;
        vt[u].push_back(v);
    }
    memset(vis, 0, sizeof(vis));
    memset(mark, 0, sizeof(mark));
    bfs(s);
    int ans=0;
    for(int i=1 ; i<=n ; i++){
        if(!vis[i]){
            vt[s].push_back(i);
            bfs(i);
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}

