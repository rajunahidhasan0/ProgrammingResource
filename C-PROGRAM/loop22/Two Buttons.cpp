#include<bits/stdc++.h>
using namespace std;
#define MS(ar) memset(ar, 0, sizeof(ar))
int  vis[100005];
int  step[100005];
int n, m;
int func()
{
    queue<int>Q;
    Q.push(n);
    vis[n]=1;
    step[n]=0;
    while(!Q.empty()){
        int u=Q.front();
        ///cout<<u<<"->"<<step[u]<<" || ";
        Q.pop();
        if(u==m)return step[u];
        if(u>1 && !vis[u-1]){
            Q.push(u-1);
            step[u-1] = step[u]+1;
            vis[u-1]=1;
        }
        if(u<m && !vis[2*u]){
            Q.push(2*u);
            step[2*u] = step[u]+1;
            vis[2*u]=1;
        }
    }
    return -1;
}
int main()
{
    int ans;
    cin>>n>>m;
    MS(vis);
    MS(step);
    ans=func();
    cout<<ans<<endl;
    return 0;
}


