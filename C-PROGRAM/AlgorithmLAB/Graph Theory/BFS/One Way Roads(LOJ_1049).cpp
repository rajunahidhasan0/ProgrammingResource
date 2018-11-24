
#include <bits/stdc++.h>
#define MS(XX) memset(XX,0,sizeof(XX))
using namespace std;

vector <int> vt[110], ct[110];
int vis[110], n;

int bfs(int s)
{
    int i,x=1,f,vvv=0;

    queue <int> q;
    MS(vis);

    vis[s]=1;
    q.push(s);
    while(!q.empty()){
        f=q.front();
    ///cout<<f<<" ";
        q.pop();
        ///if(f==0)continue;
        for(i=0 ;i<vt[f].size();i++){
        int u = vt[f][i];
        if(!vis[u] || (u==s && x==n) )
        {
            if(ct[f][i]==0){
                vis[ u ] = 1;
                q.push(u);
                x++;
                break;
            }
            else if(i==0 && ct[f][i]!=0 && vis[vt[f][1]]==0){
                continue;
            }
            else{
                vvv+=ct[f][i];
                vis[ u ]=1;
                q.push(u);
                x++;
                break;
            }
        }
    }
    }
    return vvv;
}
int main()
{
    int test, tc=0, i;
    ///freopen("test.txt","r",stdin);
    scanf("%d", &test);
    while(test--){
        scanf("%d", &n);
        for(i=0;i<n+3;i++){vt[i].clear(); ct[i].clear();}
        int u, v, w, total=0, ans=0;
        for(i=0 ; i<n ; i++)
        {
            scanf("%d %d %d", &u, &v , &w);
            vt[u].push_back(v);
            vt[v].push_back(u);
            ct[u].push_back(0);
            ct[v].push_back(w);
        total+=w;
        }
        ans = bfs(u);
    ///cout<<ans<<endl;
        ans = min( ans, total-ans );
        printf("Case %d: %d\n",++tc, ans);
    }
    return 0;
}
