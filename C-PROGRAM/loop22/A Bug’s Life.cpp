#include<bits/stdc++.h>
using namespace std;
vector<int>vt[2010];
int vis[2010];
int gen[2010];
int bfs(int x)
{
    queue<int>Q;
    Q.push(x);
    gen[x]=1;
    vis[x]=1;
    while(!Q.empty())
    {
        int p=Q.front();
        Q.pop();
        for(int i=0; i<vt[p].size(); i++){
            int y=vt[p][i];
            if(gen[p]==1){
                   /// cout<<"prothombar"<<endl;
                if(gen[y]==1) return 1;
                else{
                    gen[ y ]=2;
                }
            }
            else{
               /// cout<<"Ditiyobar"<<endl;
                if(gen[y]==2) return 1;
                else{
                    gen[ y ]=1;
                }
            }
            if(!vis[y]){
                Q.push(y);
                vis[y]=1;
            }
        }
    }
    return 0;
}
int main()
{
   /// freopen("test.txt","r", stdin);
    int test, tc=0;
    cin>>test;
    while(test--)
    {
        int n, m, tt=0;
        for(int i=0 ; i<2001 ; i++){
            vt[i].clear();
        }
        int u, v;
        cin>>n>>m;
        for(int i=0 ; i<m ; i++){
            cin>>u>>v;
            vt[u].push_back(v);
            vt[v].push_back(u);
        }

        cout<<"Scenario #"<<++tc<<":"<<endl;

        memset(vis, 0, sizeof(vis));
        memset(gen, 0, sizeof(gen));
        for(int b=1 ; b<=n ; b++){
            if(!vis[b]){tt=bfs(b);}
            if(tt)break;
        }
        if(tt){
            cout<<"Suspicious bugs found!"<<endl;
        }
        else{
            cout<<"No suspicious bugs found!"<<endl;
        }
    }
    return 0;
}
