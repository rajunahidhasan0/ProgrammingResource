
#include<bits/stdc++.h>
#define siz 405
using namespace std;

vector <int> adj[siz];
bool vis[siz];

int bfs(int source)
{
    queue <int> vc;
    int a,b,c;
    vis[source]=1;
    vc.push(source);
    int ans=1;
    while(!vc.empty())
    {
        a=vc.front();
        vc.pop();
        for(int i=0;i<adj[a].size();i++)
        {
            b=adj[a][i];
            if(vis[b]==0){
                vis[b]=1;
                ans++;
                vc.push(b);
            }
        }
    }
    return ans;
}
int main()
{
    int t,ca,n;
    //freopen("inputG.txt","r",stdin);
    cin>>t;
    for(ca=1;ca<=t;ca++)
    {
        int n,m,source;
        memset(vis,0,sizeof vis);
        for(int i = 0; i < siz; i++) adj[i].clear();
        cin>>m>>n;
        string s[n+20];
        for(int i=0; i<n; i++) cin>>s[i];

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                int p=j+m*i;
                if(j<m&&s[i][j]=='.'&&s[i][j+1]=='.'){
                        adj[p].push_back(p+1);
                        adj[p+1].push_back(p);
                }
                if(i<n&&s[i][j]=='.'&&s[i+1][j]=='.'){
                        adj[p].push_back(p+m);
                        adj[p+m].push_back(p);
                }
                if(s[i][j]=='@'){
                        source=p;
                        if(j<m&&s[i][j+1]=='.'){
                                adj[p].push_back(p+1);
                                adj[p+1].push_back(p);
                        }
                        if(i<n&&s[i+1][j]=='.'){
                                adj[p].push_back(p+m);
                                adj[p+m].push_back(p);
                        }
                        if(i>0&&s[i-1][j]=='.'){
                                adj[p].push_back(p-m);
                                adj[p-m].push_back(p);
                        }
                        if(j>0&&s[i][j-1]=='.'){
                                adj[p].push_back(p-1);
                                adj[p-1].push_back(p);
                        }
                }
            }
        }
        int ans=bfs(source);
        printf("Case %d: %d\n",ca,ans);
    }
}




