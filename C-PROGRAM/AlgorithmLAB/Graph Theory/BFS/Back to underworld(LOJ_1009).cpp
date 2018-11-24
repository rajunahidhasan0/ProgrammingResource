
#include<bits/stdc++.h>
using namespace std;
bool vis[200002];
int n;
int ar[200002];
int level[200002];
vector<int>vt[20005];

int dfs(int x)
{
    stack<int>st;
    st.push(x);
    vis[x]=1;
    level[x]=1;
    while(!st.empty()){
        int N=st.top();
        st.pop();
        for(int i=0; i<vt[N].size(); i++){
            if(vis[vt[N][i]]==0){
                st.push(vt[N][i]);
                vis[vt[N][i]]=1;
                level[vt[N][i]]=level[N]+1;
            }
        }
    }
    return 0;
}


int main()
{
    int test, tc=0;
    cin>>test;
    while(test--)
    {
        memset(vis, 0, sizeof(vis));
        memset(ar, 0, sizeof(ar));
        memset(level, 0, sizeof(level));
        for(int i=0; i<20002; i++)vt[i].clear();
        scanf("%d", &n);
        int u, v;
        for(int i=0; i<n ; i++){
            scanf("%d %d", &u, &v);
            ar[u]=1; ar[v]=1;
            vt[v].push_back(u);
            vt[u].push_back(v);
        }
        for(int i=1; i<20002; i++){
            if(ar[i]==1)
                if(vis[i]==0)
                    dfs(i);
        }
        int p=0, q=0;
        for(int i=1; i<20002; i++){
            if(ar[i]==1){
                     //cout<<level[i]<<" ";
                if(level[i]%2==1)p++;
                else q++;
            }
        }
        printf("Case %d: %d", ++tc, max(p, q));
    }
    return 0;
}


